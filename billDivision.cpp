#include<bits/stdc++.h>
using namespace std;
void boneApetite(int arr[],int n,int k,int b){
	int sum=0;
	for(int i=0;i<n;i++)
			sum+=arr[i];	
	
	sum=(sum-arr[k])/2;
	if(sum==b)
		cout<<"Bon Appetit";
	else {
	    cout<<(b-sum);
	    
	}

}
int main(){
	int n,k;
	int b;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>b;
	boneApetite(arr,n,k,b);
	return 0;
}