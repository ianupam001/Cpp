#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y)
{
	int res=0;
	int diff=y-x;
	if(abs(diff)%2==0)
	{
		while(x<y)
		{
			x+=2;
			res++;
		}
	}
	else{

		while(x<y)
		{
			x+=2;
			res++;
		}
		res+=1;

	}
	return res;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y;
		scanf("%d%d",&x,&y);
		printf("%d\n",solve(x,y));
	}
	return 0;
}