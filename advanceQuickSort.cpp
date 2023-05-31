#include<bits/stdc++.h>
using namespace std;

int temp[100000];

long int merge(int s[],int left,int mid,int right)
{
	long int shift=0;
	int temp[left+right];
	int i=left,j=mid,k=left;
	while(i<mid && j<=right)
	{
		if(s[i]<=s[j])
		{
			temp[k++]=s[i++];
		}
		else
		{
			temp[k++]=s[j++];
			shift+=mid-i;
		}
	}
	while(i<mid)
	{
		temp[k++]=s[i++];
	}
	while(j<=right)
	{
		temp[k++]=s[j++];
	}
	while(left<=right)
	{
		s[left]=temp[left];
		left++;
	}
	return shift;

}

long int mergeSort(int arr[],int left,int right)
{
	long int shift=0;
	if(left<right)
	{
		int mid=left+(right-left)/2;
		shift+=mergeSort(arr,left,mid);
		shift+=mergeSort(arr,mid+1,right);
		shift+=merge(arr,left,mid+1,right);
	}
	return shift;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		long int shift=mergeSort(arr,0,n-1);
		cout<<shift<<endl;
	}
	return 0;
}