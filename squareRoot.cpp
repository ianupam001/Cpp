#include<bits/stdc++.h>
using namespace std;

// naive approach 
/*int sqrRoot(int x)
{
	int i=1;
	while(i*i<=x)
		i++;
	return (i-1);

}*/
// efficient approach using binary search
int sqrRoot(int x){
	int low=1,high=x,ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int mySq=mid*mid;
		if(mySq==x)
			return mid;
		else if(mySq>x)
			high=mid-1;
		else
		{
			low=mid+1;
			ans=mid;
		}
	}
	return ans;
}
int main(){
	int x;
	cin>>x;
	cout<<sqrRoot(x)<<endl;
    return 0;
}