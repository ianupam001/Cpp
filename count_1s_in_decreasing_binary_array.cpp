#include<bits/stdc++.h>
using namespace std;
count1s(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==1 && mid+1<n && arr[mid+1]==1)
			low=mid+1;
		else if(arr[mid]==0)
			high=mid-1;
		else if(arr[mid]==1 &&((mid+1<n && arr[mid+1]==0) || (mid=n-1)) )
			return mid+1;
		
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<count1s(arr,n);
	return 0;

}