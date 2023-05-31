#include<bits/stdc++.h>
using namespace std;
// insertion sort with and without insert() funtion

/*void insert(int arr[],int i)
{
	arr[i+1]=arr[i];
}*/
void insertionSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			//insert(arr,j);
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	insertionSort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}