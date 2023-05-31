#include<bits/stdc++.h>
using namespace std;
void reverse(char str[],int low,int high)
{
	while(low<=high)
	{
		swap(str[low],str[high]);
		low++;
		high--;
	}
}
void reverseWords(char str[],int n)
{
	int start=0;
	for(int end=0;end<n;end++)
	{
		if(str[end]==' ')
		{
			
				reverse(str,start,end-1);
				start=end+1;
			
		}
	}
	reverse(str,start,n-1);
	reverse(str,0,n-1);
}
int main(){
	string str;
	getline(cin,str);
	int n=str.length();
	char str1[n];
	strcpy(str1,str.c_str());
	reverseWords(str1,n);
	for(int i=0;i<n;i++)
		cout<<str1[i];
	return 0;
}