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
void printList(Node *head)
{
	while(head !=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
class Solution
{
public:
	Node *rotateOne(Node *head)
	{
		Node *temp=head;
		Node *curr=head;
		while(curr->next !=NULL)
		{
			curr=curr->next;
		}
		head=head->next;
		temp->next=NULL;
		curr->next=temp;
		return head;
	}
	Node *rotateK(Node *head,int k)
	{
		int count=countNodes(head);
		if(k>count)
			return NULL;
		if(head==NULL)
			return head;
		
	}
	
};
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,num;
		cin>>n;
		Node *tail,*head;
		cin>>num;
		head=tail=new Node(num);

		for(int i=0;i<n-1;i++)
		{
			cin>>num;
			tail->next=new Node(num);
			tail=tail->next;
		}
		Solution ob;
		
		head=ob.rotateOne(head);
		printList(head);
	}
	return 0;
}	