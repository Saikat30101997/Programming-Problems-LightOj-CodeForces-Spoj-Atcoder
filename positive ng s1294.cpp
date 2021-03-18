#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);
        printf("Case %d: %lld\n",i,(n*m)/2);

    }
    return 0;
}
