#include<bits/stdc++.h>
using namespace std;
string cesearCipher(string &str,int k)
{
	char a;
	for(auto &c:str)
	{
		if(isalpha(c))
		{
			a=isupper(c)? 'A':'a';
			c=a+(c-a+k)%26;
		}
	}
	return str;

}
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	int k;
	cin>>k;

	cout<<cesearCipher(str,k);
	return 0;
}