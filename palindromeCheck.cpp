#include<bits/stdc++.h>
using namespace std;
bool checkPal(string &str)
{
	int begin=0,end=str.length()-1;
	while(begin<end){
		if(str[begin] != str[end])
			return false;
		begin++;
		end--;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int output=checkPal(str);
		if(output==1)
			cout<<"Yes";
		else
			cout<<"No";
		cout<<endl;
	}
	return 0;
}