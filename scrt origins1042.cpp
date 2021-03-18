#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long p,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&p);
        k=__builtin_popcount(p);
        printf("Case %d: %lld\n",i,p+k);
    }
    return 0;
}
