#include<bits/stdc++.h>
using namespace std;
 struct Interval
 {
 	int s,e;
 };
 bool myCmp(Interval a,Interval b)
 {
 	return a.s<b.s;
 }
 void mergeOverlapping(Interval arr[],int n)
 {
 	sort(arr,arr+n,myCmp);
 	int res=0;
 	for(int i=1;i<n;i++)
 	{
 		if(arr[res].e>=arr[i].s)
 		{
 			arr[res].e=max(arr[res].e,arr[i].e);
 			arr[res].s=min(arr[res].s,arr[i].s);
 		}
 		else
 		{
 			res++;
 			arr[res]=arr[i];
 		}
 	}
 	for(int i=0;i<=res;i++)
 		cout<<"["<<arr[i].s<<","<<arr[i].e<<"] ";
 }
 int main()
 {
 	int n;
 	cin>>n;

 	Interval arr[n];
 	for(int i=0;i<n;i++)
 		cin>>arr[i].s>>arr[i].e;
 	
 	mergeOverlapping(arr,n);
 	return 0;
 }