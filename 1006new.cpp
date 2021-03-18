#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b,c;
    long long a[10000],m,r;
    int p=1,n;
    cin>>n;
    while(n--)
    {
     cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>r;
     for( m=6;m<=r;m++)
     {
         a[m]=(a[m-1]+a[m-2]+a[m-3]+a[m-4]+a[m-5]+a[m-6])%10000007;
     }
     cout<<"Case "<<p++<<": "<<a[r]%10000007<<endl;



    }
    return 0;
}
