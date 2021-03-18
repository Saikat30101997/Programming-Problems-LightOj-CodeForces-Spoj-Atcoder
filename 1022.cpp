#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;
int main()
{
    int n,p=1;
    double r,ans,q,s,t;
    cin>>n;
    while(n--)
    {
        cin>>r;
        ans=(4*r*r)-(2*acos(0.0)*r*r);
        cout<<"Case "<<p++<<": "<<fixed<<setprecision(2)<<ans<<endl;
    }

}
