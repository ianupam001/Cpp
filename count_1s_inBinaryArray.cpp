#include<bits/stdc++.h>
using namespace std;
int count1s(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==0)
			low=mid+1;
		else
		{
			if(mid==0 || arr[mid-1]==0)
				return (n-mid);
			else
				high=mid-1;
		}
	}
	return -1;
}
// counting the first occurence
/*int firstOccur(int arr[],int n,int x)
{
	int low=0,high=n;
	while(low<high)
	{
		int mid=low+high/2;
		if(arr[mid]>x)
			high=mid-1;
		else if(arr[mid]<x)
			low=mid+1;
		else
		{
			if(mid==0 || arr[mid] != arr[mid-1])
				return  mid;
			else
				high=mid-1;
		}
	}
	return -1;
}
// counting the first ocurrence of 1, and substracting from array size
int countOne(int arr[],int n)
{
	int first=firstOccur(arr,n,1);
	if(first==-1)
		return 0;
	else
		return n-first;
}*/
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count=count1s(arr,n);
	cout<<count<<endl;
	cout<<countOne(arr,n);
	return 0;
}