#include<bits/stdc++.h>
using namespace std;

/*double findMedian(vector<int> arr,vector<int> brr)
{
	vector<int> crr(arr);
	crr.insert(crr.end(),brr.begin(),brr.end());
	double median;

	sort(crr.begin(),crr.end());

	int n=crr.size();
	int low=0,high=n;
	
	int mid=(low+high)/2;
  
	if(n%2==0){

		median=(crr[mid]+crr[mid-1])/2;
	}
	else 
		median=crr[mid];
	return median;
}*/
/*double getMedian(int arr[],int brr[],int n1,int n2)
{
	int begin1=0,end1=n1;
	while(begin1<end1)
	{
		int i1=(begin1+end1)/2;
		int i2=(n1+n2+1)/2-i1;

		int min1=(i1==n1) ? INT_MAX:arr[i1];
		int max1=(i1==0) ? INT_MIN:arr[i1-1];

		int min2=(i2==n2) ? INT_MAX:brr[i2];
		int max2=(i2==0) ? INT_MIN:brr[i2-1];

		if((max1<=min2) && (max2<=min1))
		{
			if((n1+n2)%2==0)
				return ((double)max(max1,max2)+min(min1,min2))/2;
			else
				return (double)max(max1,max2);
		}
		else if(max1>min2) 
			end1=i1-1;
		else 
			begin1=i1+1;
	}
	return -1;
}*/
int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        int begin=0,end=n;
        
        while(begin<end)
        {
            int i1=(begin+end)/2;
            int i2=(n+m+1)/2-i1;
            
            int min1=(i1==n) ? INT_MAX:arr[i1];
            int max1=(i1==0) ? INT_MIN:arr[i1-1];
            
            int min2=(i2==m) ? INT_MAX:brr[i2];
            int max2=(i2==0) ? INT_MIN:brr[i2-1];
            
            if((max2<=min1) && (max1<=min2))
            {
                if((n+m)%2==0)
                return ((double)max(max1,max2)+min(min1,min2))/2;
                else
                return ((double)max(max1,max2));
            }
            else if(max1>min2)
            end=i1-1;
            else
            begin=i1+1;
        }
        return -1;
    }
int main(){
	int n,m;
	cin>>n>>m;
	/*vector<int> arr(n);
	vector<int> brr(m);*/
	int arr[n],brr[m];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
		cin>>brr[i];
	/*double median=findMedian(arr,brr);
	cout<<median<<endl;*/
	if(n>m)
		cout<<findMedian(arr,n,brr,m);
	else
		cout<<findMedian(arr,n,brr,m);
	
	return 0;
}