#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int t;
    double x1,y1,r1,x2,y2,r2,dis,ang1,ang2,h,s1,s2,tarea1,tarea2,carea1,carea2,farea1,farea2;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        dis = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        ang1 = 2.0*acos(((r1*r1)+(dis*dis)- (r2*r2))/(2*r1*dis));
        ang2 = 2.0*acos(((r2*r2)+(dis*dis)-(r1*r1))/(2*r2*dis));
        h = sqrt((2.0*(r1*r1))-(2.0*(r1*r1)*cos(ang1)));
        s1 = (r1+r1+h)/2.0;
        s2 = (r2+r2+h)/2.0;
        tarea1 = sqrt(s1*(s1-r1)*(s1-r1)*(s1-h));
        tarea2 = sqrt(s2*(s2-r2)*(s2-r2)*(s2-h));
        carea1 = (r1*r1*ang1)/2.0;
        carea2 = (r2*r2*ang2)/2.0;
        farea1 = carea1-tarea1;
        farea2 = carea2-tarea2;

        if(dis>=(r1+r2))
        {
            printf("Case %d: 0\n",i);
        }
         else if(dis<=abs(r1-r2))
        {
            if(r1<=r2) printf("Case %d: %.12lf\n",i,(r1*r1*pi));
            else if(r2<=r1) printf("Case %d: %.12lf\n",i,(r2*r2*pi));
        }
       else  if(dis<(r1+r2) )
        {
            if(ang1<=pi && ang2<=pi)
                 printf("Case %d: %.12lf\n",i,farea1+farea2);
            else if(ang1>pi || ang2>pi)
            {
                if(ang2>pi)
                    printf("Case %d: %.12lf\n",i,farea1+tarea2+carea2);
                else
                    printf("Case %d: %.12lf\n",i,farea2+tarea1+carea1);
            }
        }

    }
}
