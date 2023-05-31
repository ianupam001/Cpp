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
int getNodeValue(Node *head,int position)
{
	int count=0;
	Node *curr=head;
	while(curr !=NULL)
	{
		count++;
		curr=curr->next;
	}
	curr=head;
	for(int i=1;i<(count-position+1);i++)
		curr=curr->next;
	return curr->data;
}
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
		int position;
		cin>>position;
		cout<<getNodeValue(head,position)<<"\n";
	}
	return 0;
}