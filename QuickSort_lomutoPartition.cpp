#include<bits/stdc++.h>
using namespace std;

// standard lomuto partition algorithm
int lomutoPArtition(int arr[],int l,int h)
{
	int pivot=arr[h],i=l-1;
	for(int j=l;j<=h;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return i+1;
}

// standard quick sort algorithm
void quickSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=lomutoPArtition(arr,l,h);
		quickSort(arr,l,p-1);
		quickSort(arr,p+1,h);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quickSort(arr,0,n-1);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}