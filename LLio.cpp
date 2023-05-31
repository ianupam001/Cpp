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
void loopHere(Node *head,Node *tail,int position)
{
	if(position==0) return;
	Node *walk=head;
	for(int i=1;i<position;i++)
		walk=walk->next;
	tail->next=walk;
}

class Solution
{
public:
	bool detectLoop(Node *head)
	{
		Node *fast=head, *slow=head;
		while(fast !=NULL && fast->next !=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;

			if(slow==fast)
				return true;
		}
		return false;

	}
	void detectRemoveLoop(Node *head)
	{
		Node *slow=head,*fast=head;
		while(fast !=NULL && fast->next !=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;

			if(slow==fast)
				break;
		}
		if( slow !=fast)
			return;
		slow=head;
		while(slow->next != fast->next)
		{
			slow=slow->next;
			fast=fast->next;
		}
		fast->next=NULL;
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
		int pos;
		cin>>pos;
		loopHere(head,tail,pos);
		 Solution ob;

		 if(ob.detectLoop(head))
		 	cout<<"Yes"<<"\n";
		 else
		 	cout<<"No"<<"\n";
		 
		 ob.detectRemoveLoop(head);

		 
		 if(ob.detectLoop(head))
		 	cout<<"Yes"<<"\n";
		 else
		 	cout<<"No"<<"\n";
	}
	return 0;
}