#include<bits/stdc++.h>
using namespace std;
int hoarePartition(int arr[],int low,int high)
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
int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];
	
    int low=0,high=n-1;

    cout<<hoarePartition(arr,low,high)<<endl;
    for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	return 0;
}