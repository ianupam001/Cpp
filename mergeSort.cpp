#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
	int n1=mid-low+1;
	int n2=high-mid;
	int left[n1],right[n2];

	for(int i=0;i<n1;i++)
		left[i]=arr[low+i];
	for(int i=0;i<n2;i++)
		right[i]=arr[mid+1+i];

	int i=0,j=0,k=low;

	while(i<n1 && j<n2)
	{
		if (left[i]<=right[j])
			arr[k++]=left[i++];
		else
			arr[k++]=right[j++];
	}
	while(i<n1)
		arr[k++]=left[i++];
	while(j<n2)
		arr[k++]=right[j++];
}

void mergeSort(int arr[],int low,int high)
{
	if(high>low)
	{
		int mid=low+(high-low)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int l=0,r=n-1;

	mergeSort(arr,l,r);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}