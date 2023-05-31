
#include<bits/stdc++.h>
using namespace std;
int countSpecific(int m,int n)
{
    int count=0;
    for(int i=m;i<=n;i++)
    {
        while(i!=0)
        {
            int lastDigit=i%10;
            if(lastDigit==1 || lastDigit==4 || lastDigit==9)
            {
                count++;
                break;
            }
            i=i/10;
        }
    }
    return count;

}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<countSpecific(m,n);
    return 0;
}
