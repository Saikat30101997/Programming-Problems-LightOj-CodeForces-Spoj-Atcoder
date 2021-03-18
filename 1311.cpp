#include<bits/stdc++.h>
#define d  double
using namespace std;

int main()
{
    int n;
    d v1,v2,v3,a1,a2,t1,t2,s,mx;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;

        s = (v1*v1)/(2*a1) + (v2*v2)/(2*a2);

        t1 = v1/a1;
        t2 = v2/a2;

        mx = v3*(max(t1,t2));

        cout<<"Case "<<i<<": "<<fixed<<setprecision(6)<<s<<' '<<mx<<endl;

    }
}


