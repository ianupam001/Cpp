#include<bits/stdc++.h>
using namespacestd;
int flatLand(int n,vector<int>c)
{
	int res=0;
	if(n==c.size())
		return res;
	for(int i=0;i<n;i++)
	{
		



	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> arr(m);
	for(int i=0;i<m;i++)
		cin>>arr[i];
	cout<<flatLand(n,arr);
	return 0;
}