 
#include <bits/stdc++.h>
using namespace std;
int sqRoot(int x)
{
	int low=1,high=x-1,ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int mySq=mid*mid;

		if(mySq==x)
			return mid;
		else if(x<mySq)
			high=mid-1;
		else
		{
			low=mid+1;
			ans=mid;
		}
	}
	return ans;
}
int main()
{
	int x;
	cin>>x;
	cout<<sqRoot(x);
   
   return 0;
}