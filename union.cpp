#include<bits/stdc++.h>
using namespace std;
/*void printUnion(int a[],int b[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(i>0 && a[i-1]==a[i]){ i++; continue; }

		if(j>0 && b[j-1]==b[j]){ j++; continue; }

		if(a[i]<b[j]){ cout<<a[i]<<" "; i++; }

		else if(a[i]>b[j]){ cout<<b[j]<<" "; j++; }

		else{ cout<<a[i]<<" "; i++; j++; }
	}
	while(i<m){ if(i==0 || a[i] != a[i-1]) cout<<a[i]<<" "; i++; }

	while(j<n){ if(j==0 || b[j] != b[j-1]) cout<<b[j]<<" "; j++; }
}*/
vector<int> printUnion(int a[],int b[],int n,int m)
{
	vector<int>v;
	int i=0,j=0;
    while(i<n && j<m)
    {
    	if(i>0 && a[i-1]==a[i])
    	{
    		i++;
    		continue;
    	}
    	if(j>0 && b[j-1]==b[j])
    	{
    		j++;
    		continue;
    	}
    	if(a[i]<b[j])
    	{
    		v.push_back(a[i]);
    		i++;
    	}
    	else if(a[i]>b[j])
    	{
    		v.push_back(b[j]);
    		j++;
    	}
    	else
    	{
    		v.push_back(a[i]);
    		i++;
    		j++;
    	}
    }
    while(i<n)
    {
    	if(i==0 || a[i] != a[i-1])
    		v.push_back(a[i]);
    	i++;
    }
    while(j<m)
    {
    	if(j==0 || b[j] != b[j-1])
    		v.push_back(b[j]);
    	j++;
    }
    return v;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	vector<int>v=printUnion(a,b,m,n);
	for(auto x:v)
		cout<<x<<" ";
	return 0;
}