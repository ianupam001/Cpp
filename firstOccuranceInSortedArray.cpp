#include<stdio.h>

//recursive approach
int firstOccuranceRecursive(int arr[],int low,int high,int x)
{
	if(low>high) 
		return -1;
	int mid=(low+high)/2;

	if(arr[mid]<x)
		return firstOccuranceRecursive(arr,mid+1,high,x);
	else if(arr[mid]>x)
		return firstOccuranceRecursive(arr,low,mid-1,x);
	else
	{
		if(mid==0 || arr[mid-1] != arr[mid])
			return mid;
		else
			firstOccuranceRecursive(arr,low,mid-1,x);
	}

}

// iterative approach
int firstOccuranceIterative(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>x)
			high=mid-1;
		else if(arr[mid]<x)
			low=mid+1;
		else
		{
			if(mid==0 || arr[mid-1] != arr[mid])
				return mid;
			else
				high=mid-1;
		}
	}
	return -1;
}

int main(){
	int n,x;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&x);

    // recursive fuction call
	int index=firstOccuranceRecursive(arr,0,n-1,x);
	if(index==-1)
		printf("Element  not found(Recursive)!\n");
	else
		printf("Element found at index(Recusrive) %d\n",index);

    // Iterative function call
	int index1=firstOccuranceIterative(arr,n,x);
	if(index1==-1)
		printf("Element  not found(Iterative)!\n");
	else
		printf("Element found at index(Iterative) %d\n",index);

	return 0;
}