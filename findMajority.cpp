#include<bits/stdc++.h>
using namespace std;
// finding candidate
int findCandidate(int arr[],int n)
{
	int major_indx=0,count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[major_indx]==arr[i])
			count++;
		else
			count--;
		if(count==0)
		{
			major_indx=i;
			count=1;
		}
	}
	return arr[major_indx];
}
// checking if candidate is majority or not
bool isMajority(int arr[],int n,int cand)
{
	int count=0;
	for(int i=0;i<n;i++)
		if(arr[i]==cand)
			count++;
	if (count > n/2)
		return 1;
	else 
		return 0;
}
// finding majority
int findMajority(int arr[],int n)
{
	int cand=findCandidate(arr,n);
	if(isMajority(arr,n,cand))
		return cand;
	else 
		return -1;
}
int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<findMajority(arr,n);
	return 0;
}