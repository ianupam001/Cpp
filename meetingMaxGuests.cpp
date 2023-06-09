#include<bits/stdc++.h>
using namespace std;
int maxGuests(int *arr,int *dep,int n)
{
	sort(arr,arr+n);
	sort(dep,dep+n);
	int i=1,j=0,curr=1,res=1;
	while(i<n && j<n)
	{
		if(arr[i]<=dep[j])
		{
			i++;
			curr++;
		}
		else
		{
			curr--;
			j++;
		}
		res=max(res,curr);
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n],dep[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cin>>dep[i];
	cout<<maxGuests(arr,dep,n);
	return 0;
}