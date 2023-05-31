#include<bits/stdc++.h>
using namespace std;
bool myCpm(string i, string j)
{
	int n=i.length();
	int m=j.length();

	if(n==m)
		return (i<j);
	else
		return n<m;
}
int main()
{
	int n;
	cin>>n;
	vector<string> unsorted(n);

	for(int i=0;i<n;i++)
		cin>>unsorted[i];

	sort(unsorted.begin(),unsorted.end(),myCpm);

	for(int i=0;i<n;i++)
		cout<<unsorted[i]<<endl;
	return 0;
}