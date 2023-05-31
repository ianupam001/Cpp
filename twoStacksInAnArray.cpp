#include<bits/stdc++.h>
using namespace std;
 struct TwoStacks
 {
 	int *arr;
 	int cap;
 	int top1,top2;

 	TwoStacks(int n)
 	{
 		cap=n;
 		arr=new int [n];
 		top1=-1;
 		top2=cap;
 	}
 	void push1(int x)
 	{
 		if(top1<top2-1)
 		{
 			top1++;
 			arr[top1]=x;
 		}
 		else
 		{
 			cout<<"Stack Overflow";
 			exit(1);
 		}
 	}
 	void push2(int x)
 	{
 		if(top1<top2-1)
 		{
 			top2--;
 			arr[top2]=x;
 		}
 		else
 		{
 			cout<<"Stack Overflow";
 			exit(1);
 		}
 	}
 	int pop1()
 	{
 		if(top1>=0)
 		{
 			int x=arr[top1];
 			top1--;
 			return x;
 		}
 		else
 		{
 			cout<<"Stack Underflow";
 			exit(1);
 		}
 	}
 	int pop2()
 	{
 		if(top2<cap)
 		{
 			int x=arr[top2];
 			top2--;
 			return x;
 		}
 		else
 		{
 			cout<<"Stack Underflow";
 			exit(1);
 		}
 	}
 	
 };
 int main()
 {
 	TwoStacks ob(5);
 	ob.push1(1);
 	ob.push1(2);
 	ob.push1(3);
 	ob.push2(4);
 	ob.push2(5);

 	cout<<ob.pop1()<<" ";
 	cout<<ob.pop2()<<" ";
 	return 0;
 }