#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxNormalSum(int arr[],int n)
{
	int res=arr[0],maxEnding=arr[0];
	for(int i=1;i<n;i++)
	{
		maxEnding=max(arr[i],maxEnding+arr[i]);
		res=max(res,maxEnding);
	}
	return res;
}
int circularSubArraySum(int arr[],int n)
{
	int maxNormal=maxNormalSum(arr,n);
	if(maxNormal<0)
		return maxNormal;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		arr[i]=-arr[i];
	}
	int maxCircularSum=sum+maxNormalSum(arr,n);
	int res= max(maxCircularSum,maxNormal);
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int res=circularSubArraySum(arr,n);
	printf("%d",res);
	return 0;
}