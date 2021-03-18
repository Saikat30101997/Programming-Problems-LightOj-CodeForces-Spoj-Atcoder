#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    long long n,m,r,p,cnt;


    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>m>>n;
        cnt=1;
        p = n;
        while(1)
        {
            n = (n*10+p)%m;
            cnt++;
            if(n%m==0)
                break;

        }
         cout<<"Case "<<i<<": "<<cnt<<endl;
    }



}
