#include<bits/stdc++.h>
using namespace std;

int firstOccurr(int *,int,int);
int lastOccur(int *,int,int);

int findOccurr(int arr[],int n,int x)
{
	int first=firstOccurr(arr,n,x);
	if(first==-1)
		return 0;
	else
		return (lastOccur(arr,n,x)-first+1);
}
int main()
{
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>x;
	cout<<findOccurr(arr,n,x);
	return 0;
}
//finding first occurrence
int firstOccurr(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>x)
			high=mid-1;
		else if(arr[mid]<x)
			low=mid+1;
		else
		{
			if(mid==0 || arr[mid] != arr[mid-1])
				return mid;
			else
				high=mid-1;
		}
	}
	return -1;
}
// finding last occurrence
int lastOccur(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>x)
			high=mid-1;
		else if(arr[mid]<x)
			low=mid+1;
		else
		{
			if(mid==n-1 || arr[mid] != arr[mid+1])
				return mid;
			else
				low=mid+1;
		}
	}
	return -1;

}