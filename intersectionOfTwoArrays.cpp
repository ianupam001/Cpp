#include<bits/stdc++.h>
using namespace std;

void intersection1(int a[],int b[],int n,int m)
{
	cout<<"\nNaive Approach"<<endl;
	for(int i=0;i<n;i++)
	{
		if(i>0 && a[i]==a[i-1])
		{
			i++;
			continue;
		}
		for(int j=0;i<m;j++)
		{
			if(a[i]==b[j])
			{
				cout<<a[i]<<" ";
				break;
			}
		}
	}
}
void intersection(int a[],int b[],int n,int m)
{
	cout<<"Efficient Approach"<<endl;
	int i=0,j=0;
	while(i<n && j<m)
	{
		if (i>0 && a[i]==a[i-1])
		{
			i++;
			continue;
		}
		else if(a[i]<b[j])
			i++;
		else if(a[i]>b[j])
			j++;
		else
		{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n],brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int j=0;j<m;j++)
		cin>>brr[j];
	intersection(arr,brr,n,m);
	intersection1(arr,brr,n,m);
	return 0;
}