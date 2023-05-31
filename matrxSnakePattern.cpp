#include<bits/stdc++.h>
using namespace std;
void printSnake(int **arr,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			   cout<<arr[i][j]<<" ";
		}
		else{
			for(int j=n-1;j>=0;j++)
				cout<<arr[i][j]<<" ";
		}
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	int **arr;
	arr=new int *[m];
	for(int i=0;i<m;i++)
		arr[i]=new int [n];
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	printSnake(arr,m,n);
	return 0;
}