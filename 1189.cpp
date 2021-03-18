#include<bits/stdc++.h>
using namespace std;
long long fact[25],ans[25];

long long factorial(int n)
{
    long long result=1;
    for(int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}

int main()
{
    long long m;
    for(int i=0;i<20;i++)
    {
        fact[i]=factorial(i);
    }

    int n;
    int cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         cin>>m;
         cnt=0;
         for(int j=19;j>=0 && m>=0;j--)
         {
             if(fact[j]<=m)
             {
                 m-=fact[j];
                 ans[cnt]=j;
                 cnt++;
             }
         }
         cout<<"Case "<<i<<": ";
         if(m!=0)
         {
             cout<<"impossible"<<endl;
         }
         else{
         cout<<ans[cnt-1];

         for(int k=cnt-2;k>=0;k--)
         {
             cout<<"!+"<<ans[k];
         }
         cout<<"!"<<endl;
         }

    }
}

