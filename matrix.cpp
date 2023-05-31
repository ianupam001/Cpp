#include<bits/stdc++.h>
using namespace std;
// ways of creation of matrix
int main()
{
	// naive way
	/*int m=3,n=2;
	int arr[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			arr[i][j]=i+j;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";*/
// double pointer
	/*int m,n;
	cin>>m>>n;

	int **arr;
	arr=new int *[m];
	for(int i=0;i<m;i++)
		arr[i]=new int [n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}*/
// using array of pointers
	/*int m,n;
	cin>>m>>n;
	int *arr[m];
	for(int i=0;i<m;i++)
		arr[i]=new int [n];
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
*/
// array of 2D vectors
	/*int m,n;
	cin>>m>>n;
	vector<int>arr[m];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		arr[i].push_back(20);
		}
	}

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";*/

// using vector of vectors
	/*int m=3,n=2;
	vector<vector<int>>arr;
	for(int i=0;i<m;i++)
	{
		vector<int>v;
		for(int j=0;j<n;j++)
			v.push_back(30);
		arr.push_back(v);
	}
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";*/

	return 0;
}