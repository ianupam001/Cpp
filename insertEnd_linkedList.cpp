#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;

	Node(int x)
	{
		data=x;
		next=NULL;
	}
	
};
Node *insertEnd(Node *head,int x)
{
	Node *temp= new Node(x);
	if(head==NULL)
		return temp;
	Node *curr=head;
	while(curr->next !=NULL)
		curr=curr->next;
	curr->next=temp;
	return head;
}
void printList(Node *head)
{

	while(head !=NULL)
	{
		cout<<(head->data)<<" ";
		head=head->next;
	}
}
int main()
{
	Node *head=NULL;
	head= insertEnd(head,10);
	head= insertEnd(head,20);
	head= insertEnd(head,30);
	head= insertEnd(head,40);
	head= insertEnd(head,50);
	head= insertEnd(head,60);
	printList(head);
	return 0;
}