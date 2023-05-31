#include<bits/stdc++.h>
using namespace std;

// naive partition algorithm
void partition(int arr[],int l,int h,int p)
{
	int temp[h-l+1],index=0;

	for(int i=l;i<=h;i++)
	{
		if (arr[i]<=arr[p] && i !=p)
		{
			temp[index]=arr[i];
			index++;
		}
	}
	temp[index++]=arr[p];
	//int res=l+index-1;

	for(int i=l;i<=h;i++)
	{
		if(arr[i]>arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	for(int i=l;i<=h;i++)
		arr[i]=temp[i-l];
	//return res;
}
int main()
{
	int n=8;
	int arr[]={2,3,4,8,9,11,21,9};
	int p=7;
	//cout<<partition(arr,0,n-1,p)<<" ";
	partition(arr,0,n-1,p);

	 for(int i=0;i<n;i++)
	 	cout<<arr[i]<<" ";
	 return 0;
}