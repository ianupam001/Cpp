#include<bits/stdc++.h>
using namespace std;

void lomutoPartition(int arr[],int low,int high)
{
	int pivot=arr[high],i=low-1;

	for(int j=low;j<=high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];
	
    int low=0,high=n-1;

	lomutoPartition(arr,low,high);

	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	return 0;
}