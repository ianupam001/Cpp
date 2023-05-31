#include<bits/stdc++.h>
using namespace std;

// this implementation doesn't print elements in their default order
void printDist(int arr[],int n)
{
	unordered_set<int>s;

	for(int i=0;i<n;i++)
		s.insert(arr[i]);
	for(auto x:s)
		cout<<x<<" ";
}

// this implementattion prints element in their default order
void printDistOrd(int arr[],int n)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	{
		if(s.find(arr[i])==s.end())
		{
			cout<<arr[i]<<" ";
			s.insert(arr[i]);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	printDist(arr,n);
	cout<<"\n";
	printDistOrd(arr,n);
	return 0;
}