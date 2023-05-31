#include<bits/stdc++.h>
using namespace std;
int camleCase(string &str)
{
	int n=str.length();
	int cnt=1;
	for(int i=0;i<n;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	string str;
	cin>>str;
	cout<<camleCase(str);
	return 0;
}