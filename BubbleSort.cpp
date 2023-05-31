#include<bits/stdc++.h>
using namespace std;
// bubble sort naive
void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;i<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
// bubble sort optimized
void bubbleSortOptimized(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool swapped=false;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubbleSortOptimized(arr,n);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}