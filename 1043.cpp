#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b,c,rat,p,q;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>rat;
        q=rat/(rat+1);
        printf("Case %d: %lf\n",i,a*sqrt(q));

    }
    return 0;
}
