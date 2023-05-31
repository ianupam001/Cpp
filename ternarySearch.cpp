#include<bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[],int l,int r,int x)
{
	if (l<=r)
	{
		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;

		if(arr[mid1]==x)
			return mid1;
		if(arr[mid2]==x)
			return mid2;
		if(x<arr[mid1])
			return ternarySearch(arr,l,mid1-1,x);
		else if(x>arr[mid2])
			return ternarySearch(arr,mid2+1,r,x);
		else
			return ternarySearch(arr,mid1+1,mid2-1,x);
	}
	return -1;

}
int ternarySearchIterative(int arr[],int n,int x)
{
	int l=0,r=n;
	while(l<r)
	{
		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;

		if(arr[mid1]==x)
			return mid1;
		if(arr[mid2]==x)
			return mid2;
		if(x<arr[mid1])
			r=mid1-1;
		else if(x>arr[mid2])
			l=mid2+1;
		else
		{
			l=mid1+1;
			r=mid2-1;
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int x;
	cin>>x;
	cout<<ternarySearch(arr,0,n-1,x)<<endl;
	cout<<ternarySearchIterative(arr,n,x);
	return 0;
}