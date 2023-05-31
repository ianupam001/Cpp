#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node (int d)
	{
		data=d;
		next=NULL;
	}
};
void printList(Node *head)
{
	if(head==NULL)
	return;
	cout<<head->data<<" ";
	for(Node *p=head->next; p !=head;p=p->next)
	cout<<p->data<<" ";	
}
void printListNew(Node *head)
{
	if(head==NULL)
		return;
	Node *p=head;
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
}
// insert at begin ----> Naive method
Node *insertBeginNaive(Node *head,int x)
{
	Node *temp=new Node(x);
	if(head==NULL)
	{
		temp->next=temp;
	}
	else
	{
		Node *curr=head;
		while(curr->next !=head)
			curr=curr->next;
		curr->next=temp;
		temp->next=head;
	}
	return temp;
}
// Insert at begin ---->efficeint solution
Node *insertBeginEffcnt(Node *head,int x)
{
	Node *temp=new Node(x);
	if(head==NULL)
	{
		temp->next=temp;
		return temp;
	}
	else
	{
		temp->next=head->next;
		head->next=temp;
		int t=head->data;
		head->data=temp->data;
		temp->data=t;
		return head;
	}
}
int main()
{
	Node *head=new Node(5);
	head->next=new Node(10);
	head->next->next=new Node(20);
	head->next->next->next=new Node(17);
	head->next->next->next->next=head;
	printList(head);
	cout<<"\nAfter Inserting at beginning-Naive\n";
	head=insertBeginNaive(head,1);
	head=insertBeginNaive(head,12);
	head=insertBeginNaive(head,3);
	head=insertBeginNaive(head,5);
	printListNew(head);
	cout<<"\nAfter Inserting at beginning-Effiecient\n";
	head=insertBeginEffcnt(head,70);
	head=insertBeginEffcnt(head,80);
	head=insertBeginEffcnt(head,90);
	head=insertBeginEffcnt(head,100);
	printListNew(head);
	return 0;

}