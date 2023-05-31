#include<bits/stdc++.h>
using namespace std;
/*void merge(int arr[],int n,int brr[],int m)
{
	int crr[n+m];

	for(int i=0;i<n;i++)
		crr[i]=arr[i];
	for(int i=0;i<m;i++)
		crr[i+n]=brr[i];

	sort(crr,crr+n+m);

	for(int i=0;i<(n+m);i++)
		cout<<arr[i]<<" ";
}*/
void merge(int arr[],int brr[],int n,int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr[i]<=brr[j])
		{
			cout<<arr[i]<<" ";
			i++;
		}
		else
		{
			cout<<brr[j]<<" ";
			j++;
		}
	}
	while(i<n)
	{
		cout<<arr[i]<<" ";
		i++;
	}
	while(j<m)
	{
		cout<<brr[j]<<" ";
		j++;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;

	int arr[n],brr[m];

	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];

	merge(arr,brr,n,m);
	return 0;
}