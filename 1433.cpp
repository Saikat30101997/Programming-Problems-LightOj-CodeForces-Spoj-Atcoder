#include<bits/stdc++.h>
#define lli  long long int
#define SIZE 100005
using namespace std;

double dist(lli x1,lli x2,lli y1,lli y2)
{
    double a = (x1-x2)*(x1-x2);
    double b = (y1-y2)*(y1-y2);

    return sqrt(a+b);
}

int main()
{
    int t;
    lli o1,o2,a1,a2,b1,b2;
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>o1>>o2>>a1>>a2>>b1>>b2;

    double r = dist(o1,a1,o2,a2);
    double m = dist(a1,b1,a2,b2);
  // cout<<r<<' '<<m<<endl;
    double x =acos((2*r*r-m*m)/(2*r*r));
    //cout<<x<<endl;
    double s = r*x;
   // cout<<s<<endl;

    cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<s<<endl;
    }

    return 0;
}
