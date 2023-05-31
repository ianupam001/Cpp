#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>leader(vector<int> arr)
{
	vector<int>v;
	int n=arr.size();
	int currLeader=arr[n-1];
	v.push_back(currLeader);
	for(int i=arr.size()-2;i>=0;i--)
	{
		if(arr[i]>currLeader)
		{
			currLeader=arr[i];
			v.push_back(currLeader);
		}
	}

	return v;

}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		//cout<<arr[i]<<" ";
	}
	vector<int> v=leader(arr);
	for(auto x:v)
		cout<<x<<" ";
	return 0;

}