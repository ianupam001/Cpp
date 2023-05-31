#include<bits/stdc++.h>
using namespace std;
long maxSubArray(vector<long> arr,long m)
{
	long maxEnding=arr[0];
	long res=0;
	for(int i=0;i<arr.size();i++)
	{
		
	}
}
int main()
{
	long n,m;
	cin>>n>>m;
	std::vector<long> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<maxSubArray(v,m);
    return 0;
}