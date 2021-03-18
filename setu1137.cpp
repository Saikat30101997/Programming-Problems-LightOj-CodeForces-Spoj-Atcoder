#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,c,i,j,k,sum=0;
   char s[10],s1[10];
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a);

       for(j=1;j<=a;j++)
       {
           scanf("%s",s);
           if(s[0]=='d')
           {
               scanf("%d",&b);
               sum+=b;
           }
           if(s[0]=='r')
           {
               printf("case %d:\n",i);
               printf("%d\n",sum);
           }
       }
       sum=0;

   }
}
