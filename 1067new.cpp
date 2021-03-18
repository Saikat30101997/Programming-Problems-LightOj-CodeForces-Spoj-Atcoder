#include<bits/stdc++.h>
#define ll long long
#define max1 1000003
using namespace std;

ll fact[1000007],t,i,j,r,s,g,h;

ll bigmod(ll a,ll p,ll m)
{
    if(p==0)
        return 1;
    else if(p%2==1)
    {
        int p1 = a%m;
        int p2 = (bigmod(a,p-1,m)%m);
        return (p1*p2)%m;
    }

    else if (p%2==0)
    {
        int p1 = bigmod(a,p/2,m)%m;
        return (p1*p1)%m;
    }

}



int main()
{

fact[0]=1;
    for(i=1;i<=1000000;i++)
    {
        fact[i] =  (fact[i-1]*i)%max1;
    }
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>r>>s;

        g = fact[r];

        h = (fact[r-s]*fact[s])%max1;

        ll o = bigmod(h,max1-2,max1);
        ll ans = g*o;

        cout<<ans%max1<<endl;
    }

}


