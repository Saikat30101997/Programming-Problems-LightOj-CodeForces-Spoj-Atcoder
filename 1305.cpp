#include<bits/stdc++.h>
using namespace std;




int main()
{
    int  a1,a2,b1,b2,c1,c2,m,n,p,q,x,t;
    cin>>t;

    for(int i=1;i<=t;i++){
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    m = a1+c1-b1;
    n = a2+c2-b2;

    long long l = ((a1*b2)+(b1*c2)+(c1*n)+(m*a2))-((b1*a2)+(c1*b2)+(m*c2)+(a1*n));
    long long area = (0.5)*l;

    cout<<"Case "<<i<<": "<<m<<' '<<n<<' '<<abs(area)<<endl;
    }


}
