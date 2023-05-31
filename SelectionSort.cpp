#include<bits/stdc++.h>
using namespace std;

/*void selectionSortNaive(int arr[],int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
		int minId=0;
		for(int j=0;j<n;j++)
			if (arr[j]<arr[minId])
				minId=j;
		temp[i]=arr[minId];
		arr[minId]=INT_MAX;
	}
	for(int i=0;i<n;i++)
		arr[i]=temp[i];

}*/
void selectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minId=i;
		for(int j=i+1;j<n;j++)
			if(arr[j]<arr[minId])
				minId=j;
		swap(arr[minId],arr[i]);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	selectionSort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}