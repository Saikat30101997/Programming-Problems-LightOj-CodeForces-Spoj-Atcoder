#include <bits/stdc++.h>
using namespace std;
int main() {
double r1,r2,r3,x,y,z,X,Y,Z,area,s,area1;
int test,i;
scanf("%d",&test);
for(i=1;i<=test;i++){
        scanf("%lf%lf%lf",&r1,&r2,&r3);
x = r2 + r3;
y = r1 + r3;
z = r1 + r2;
X = acos((y*y+z*z-x*x)/(2*y*z));
Y = acos((z*z+x*x-y*y)/(2*x*z));
Z = acos((x*x+y*y-z*z)/(2*x*y));
s = (x+y+z)/2;
area = sqrt(s*(s-x)*(s-y)*(s-z));
area1 = (r1*r1*X+r2*r2*Y+r3*r3*Z);
cout<<area<<endl;
cout<<area1<<endl;
printf("Case %d: %.08lf\n",i,area-(.5)*(area));
}
return 0;
}
