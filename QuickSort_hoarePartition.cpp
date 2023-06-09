#include<bits/stdc++.h>
using namespace std;
// hoare's partition 
int partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low-1,j=high+1;

	while(true)
	{
		do
		{
			i++;
		}while(arr[i]<pivot);
		do
		{
			j--;
		}while(arr[j]>pivot);

		if(i>=j) return j;
		swap(arr[i],arr[j]);
	}
}
// standard quick sort algorithm
void quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int p= partition(arr,low,high);
		quickSort(arr,low,p);
		quickSort(arr,p+1,high);
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