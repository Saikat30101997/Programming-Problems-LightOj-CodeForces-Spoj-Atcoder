#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,n,ans,r = 1;
    cin>>n;
    while(n--)
    {
        cin>>p;
        q = __builtin_popcount(p);
        if(q%2==0)
            printf("Case %d: even\n",r++);
        else
            printf("Case %d: odd\n",r++);
    }
    return 0;
}
