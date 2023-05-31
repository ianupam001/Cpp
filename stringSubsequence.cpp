#include<bits/stdc++.h>
using namespace std;
/*bool subSeq(string &str1,string &str2){
	int n=str1.length();
	int m=str2.length();

	int j=0;
	for(int i=0;i<n && j<m; i++)
	{
		if(str1[i]==str2[j]);
		j++;
	}
	return (j==m);
}*/
bool recurSubSeq(string &str1,string &str2,int n,int m)
{
	if(m==0)
		return true;
	if(n==0)
		return false;
	if(str1[n-1]==str2[m-1])
		recurSubSeq(str1,str2,n-1,m-1);
	else
		recurSubSeq(str1,str2,n-1,m);
}
int main(){
	string str1,str2;
	cin>>str1>>str2;
	//int op=subSeq(str1,str2);
	int n=str1.length();
	int m=str2.length();
	int opt=recurSubSeq(str1,str2,n,m);
	if(opt==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}