#include<bits/stdc++.h>
#define ll long long
#define MOD 1000003
using namespace std;

ll fact[1000007],t,i,j,r,s,g,h;

ll bigmod(ll a,ll p)
{
    ll q;
    if(p==0)
        return 1;
     if(p%2==0)
    {
        q = bigmod(a,p/2);
        q=((q%MOD)*(q%MOD))%MOD;
    }
    if(p%2==1)
    {
        q = bigmod(a,p-1);
        q = ((q%MOD)*(a%MOD))%MOD;

    }
    return q;
}

int main()
{

    fact[0]=fact[1]=1;
    for(i=2;i<=1000004;i++)
    {
        fact[i] =  ((fact[i-1]%MOD)*(i%MOD))%MOD;
    }
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>r>>s;

        g = fact[r];

        h = ((fact[r-s]%MOD)*(fact[s]%MOD))%MOD;

        ll o = bigmod(h,MOD-2);
        ll ans = ((g%MOD)*(o%MOD))%MOD;

        printf("Case %lld: %lld\n",j,ans);

    }
}




