#include<bits/stdc++.h>
#define pi acos(-1)



using namespace std;

double x,y,z;

double angle(double m,double n,double o)
{
    return acos(((m*m)+(n*n)-(o*o))/(2.0*m*n));

}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        double r1,r2,r3,a,b,c;
        cin>>r1>>r2>>r3;

        x = r1+r2;
        y = r1+r3;
        z = r2+r3;

        a = angle(x,y,z);
        b = angle(x,z,y);
        c = angle(y,z,x);

        /* a = acos(((x*x)+(y*y)-(z*z))/(2*x*y));
         b = acos(((x*x)+(z*z)-(y*y))/(2*x*z));
         c = acos(((y*y)+(z*z)-(x*x))/(2*y*z));
         cout<<a<<' '<<b<<' '<<c<<endl;*/

        double t = (x+y+z)/2.0;
        // cout<<t<<endl;

        double k = (t*(t-x)*(t-y)*(t-z));
        double area = sqrt(k);
        //  cout<<area<<endl;

        double p = a*r1*r1;
        double q = b*r2*r2;
        double r = c*r3*r3;

        double area1 = (0.5)*(p+q+r);

        //cout<<area1<<endl;

       // cout<<area-area1<<endl;
       cout<<"Case "<<i<<": "<<fixed<<setprecision(6)<<area-area1<<endl;
    }

    return 0;




}
