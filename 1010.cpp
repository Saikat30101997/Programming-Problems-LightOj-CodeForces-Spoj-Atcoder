#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,p,ans,b;
    cin>>p;
    for(int i=1; i<=p; i++)
    {
        cin>>m>>n;
        int a = m*n;
        if(m==1 || n==1)
            ans = a;

        else if(m==2 || n==2)
        {
            if(m==2)
                b=n;
            else
                b=m;
            if(b%4==1)
                ans = b+1;
            else if(b%4==2)
                ans = b+2;
            else if(b%4==3)
                ans = b+3;
            else if(b%4==0)
                ans = b;
        }

        else if(a%2==0)
            ans = (a/2);
        else
            ans = (a/2)+1;

        printf("Case %d: %d\n",i,ans);
    }
}
