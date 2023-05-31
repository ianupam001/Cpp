#include<bits/stdc++.h>
using namespace std;

/*void reverse(vector<int>&v,int low,int high)
{
	while(low<high)
	{
		swap(v[low],v[high]);
		low++;
		high--;
	}
}*/
vector<int> circularArrayRotation(vector<int>a,int k,vector<int>queries)
{
	/*int n=arr.size();
	k%=n;

	reverse(arr,0,n-1);
	reverse(arr,0,k-1);
	reverse(arr,k,n-1);

	for(int i=0;i<queries.size();i++)
		queries[i]=arr[queries[i]];
	

	return queries;*/
	  while(k--){
        int temp;
        temp=a[a.size()-1];
        a.insert(a.begin(),temp);
        a.pop_back();
    }
vector<int>arr;
for(int i=0; i<queries.size();i++)
       arr.push_back(a[queries[i]]);
   return arr;

}
int main()
{
	int n,k,q;
	cin>>n>>k>>q;

	vector<int>arr(n),queries(q),v;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<q;i++)
		cin>>queries[i];

	v=circularArrayRotation(arr,k,queries);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<"\n";

	return 0;
}