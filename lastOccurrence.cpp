#include<bits/stdc++.h>
using namespace std;
// Recursive Approach
/*int lastOccurrence(int arr[],int low,int high,int x,int n)
{
	if(low>high) return -1;
	int mid=(low+high)/2;
	if(arr[mid]>x)
		lastOccurrence(arr,low,mid-1,x,n);
	else if(arr[mid]<x)
		return lastOccurrence(arr,mid+1,high,x,n);
	else
	{
		if(mid==n || arr[mid] != arr[mid+1])
			return mid;
		else
			return lastOccurrence(arr,mid+1,high,x,n);
	}
}*/
// Iterative approach
int lastOccurrence(int arr[],int n,int x)
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
int main()
{
		int n,x;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cin>>x;
		//cout<<lastOccurrence(arr,0,n-1,x,n);
		cout<<lastOccurrence(arr,n,x);
	
	return 0;
}