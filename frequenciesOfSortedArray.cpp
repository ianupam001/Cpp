#include<bits/stdc++.h>
using namespace std;
void frequncy(vector<int> arr)
{
	int freq=1,i=1;
	int n=arr.size();
	while(i<n)
	{
		while(i<n && arr[i]==arr[i-1])
		{
			freq++;
			i++;
		}
		cout<<arr[i-1]<<" "<<freq<<endl;
		i++;
		freq=1;
	}
	if(n==1 ||arr[n-1] != arr[n-2])
		cout<<arr[n-1]<<" "<<1<<endl;
}
int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	frequncy(arr);
	return 0;
}