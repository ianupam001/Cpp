#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int x)
{
	if(low>high)
		return -1;

	int mid=(low+high)/2;
	if(arr[mid]==x)
		return mid;
	else if(arr[mid]>x)
		return binarySearch(arr,low,mid-1,x);
	else
		return binarySearch(arr,mid+1,high,x);
}
int main(){
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>x;
	
	int index=binarySearch(arr,0,n-1,x);
	if(index==-1)
		cout<<"Element not found in the array!😌";
	else 
		cout<<"Element found at index:"<<index;
	return 0;
}