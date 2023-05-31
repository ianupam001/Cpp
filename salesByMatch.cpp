#include<bits/stdc++.h>
using namespace std;
int salesByMatch(int arr[],int n){
	int count=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1]){
			i++;
           count++;
		}
		
	}
	return count;
	

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<salesByMatch(arr,n);
	return 0;
}