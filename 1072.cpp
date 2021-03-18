#include<bits/stdc++.h>
using namespace std;

const double pi = acos(-1);
int main()
{
    double p,q,ans,r,o;
    int n,m=1;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf %lf",&p,&q);
        ans = p*(sin(pi/q))/(1+(sin(pi/q)));
        printf("Case %d: %.10lf\n",i,ans);
    }
}
