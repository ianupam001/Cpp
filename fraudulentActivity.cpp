#include<bits/stdc++.h>
using namespace std;
int findMedian(vector<int>v)
{
	sort(v.begin(),v.end());
	int n=v.size();
	int mid=n/2,median;
	if(n%2==0)
		median=(v[mid]+v[mid-1])/2;
	else
		median=v[mid];
	return median;
}
int activityNotifications(vector<int>expenditure,int d)
{
	vector<int>v(d);
	for(int i=0;i<d;i++)
		v[i]=expenditure[i];
	int median=findMedian(v);

	return median;
}
int main()
{
	int n,d;
	cin>>n>>d;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<activityNotifications(arr,d);
	return 0;
}