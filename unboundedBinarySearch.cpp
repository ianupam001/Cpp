#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			return high-1;
		else if(arr[mid]<x)
			return low+1;
	}
	return -1;
}
int ub_bSearch(int arr[],int x)
{
	if(arr[0]==x) return 0;
	int i=1;
	while(arr[i]<x)
	{
		i*=2;
		if(arr[i]==x) return i;
		else
			return binarySearch(arr,i/2+1,i-1,x);
	}
}
int main()
{
	// code here
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<ub_bSearch(arr,x);

	return 0;
}