#include<bits/stdc++.h>
using namespace std;
int strongPassword(string &password,int n)
{
	int lower=1,upper=1,special=1,digit=1;
	int size=password.size();
	string s("!@#$%^&*()-+");
	for(char &c:password)
	{
		if(c>='A' && c<='Z')
			upper=0;
		else if(c>='a' && c<='z')
			lower=0;
		else if(c>='0' && c<='9')
			digit=0;
		else if(s.find(c) != string::npos)
			special=0;
	}
	int total=upper+lower+digit+special;
	return max(6-size,total);
}
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	cout<<strongPassword(str,n);
	return 0;
}