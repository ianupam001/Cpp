#include<bits/stdc++.h>
using namespace std;

struct KStacks
{
	int *arr,*top,*next;
	int k,freetop,cap;

	KStacks(int k1,int n)
	{
		k=k1;
		cap=n;
		arr=new int [cap];
		top=new int [k];
		next=new int [cap];

		for(int i=0;i<k;i++)
			top[i]=-1;

		freetop=0;

		for(int i=0;i<cap-1;i++)
			next[i]=i+1;
		next[cap-1]=-1;
	}
	bool isFull()
	{
		return (freetop==-1);
	}
	bool isEmpty(int sn)
	{
		return (top[sn]==-1);
	}

	void push(int x,int sn)
	{
		if(isFull())
		{
			cout<<"Stack Overflow";
			exit(1);
		}
		int i=freetop;
		freetop=next[i];
		next[i]=top[sn];
		top[sn]=i;
		arr[i]=x;
	}
	int pop(int sn)
	{
		if(isEmpty(sn))
		{
			cout<<"Stack Underflow";
			exit(1);
		}
		int i=top[sn];
		top[sn]=next[i];
		next[i]=freetop;
		freetop=i;
		return arr[i];
	}
	
};
int main()
{
	KStacks ob(3,5);
	ob.push(100,0);
	ob.push(200,0);
	ob.push(300,0);
	ob.push(400,1);

	cout<<ob.pop(0)<<" ";
	cout<<ob.pop(1)<<" ";
	return 0;
}