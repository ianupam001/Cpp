#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *prev;
	Node *next;
	Node(int d)
	{
		data=d;
		prev=NULL;
		next=NULL;
	}
};
void printList(Node *head)
{
	Node *curr=head;
	while(curr !=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
//insert at beginning - my function
/*Node *insertBegin(Node *head,int d)
{
	Node *temp=new Node(d);
	if(head==NULL)
		return temp;
	else
	{
		temp->prev=NULL;
		temp->next=head;
		head->prev=temp;
		return temp;
	}
}*/
//insert at beginning - mentor's function
Node *insertBegin(Node *head,int d)
{
	Node *temp=new Node(d);
	temp->next=head;
	if(head !=NULL)
		head->prev=temp;
	return temp;
}
// insert at end of DLL
Node *insertEnd(Node *head,int d)
{
	Node *temp=new Node(d);
	if(head==NULL)
		return temp;
	Node *curr=head;
	while(curr->next !=NULL)
		curr=curr->next;
	curr->next=temp;
	temp->prev=curr;
	return head;
}
// reverse a DLL
Node *reverseDLL(Node *head)
{
	if(head==NULL || head->next==NULL)
		return head;
	Node *prev=NULL;
	Node *curr=head;
	while(curr!=NULL)
	{
		prev=curr->prev;
		curr->prev=curr->next;
		curr->next=prev;
		curr=curr->prev;
	}
	return prev->prev;
}
int main()
{
	Node *head=NULL;
	head=insertBegin(head,10);
	head=insertBegin(head,20);
	head=insertBegin(head,30);
	head=insertBegin(head,40);
	head=insertBegin(head,50);
	head=insertEnd(head,9);
	head=insertEnd(head,8);
	head=insertEnd(head,7);
	head=insertEnd(head,6);
	head=reverseDLL(head);
	printList(head);
	return 0;
}