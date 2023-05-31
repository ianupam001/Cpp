#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int worth=(x*1)+(y*2);
		if (worth/(x+y)==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
	
}