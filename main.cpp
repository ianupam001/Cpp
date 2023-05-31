#include<bits/stdc++.h>
using namespace std;

void nextGreater(int arr[],int n,vector<int>&ans)
{
	for(int i=0;i<n;i++)
	{
		int j;
		int next=-1;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				next=arr[j];
				
				break;
			}
		}
			ans.push_back(next);
	}
}
void nextGreaterElement(int arr[],int n, vector<int>&ans)
{
	stack<int>st;
	st.push(arr[n-1]);
	ans.push_back(-1);

	for(int i=n-2;i>=0;i--)
	{
		while(!st.empty() && st.top()<=arr[i])
			st.pop();

		int ng=st.empty() ? -1 :st.top();
		ans.push_back(ng);
		st.push(arr[i]);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int>ans;
	nextGreaterElement(arr,n,ans);

	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}