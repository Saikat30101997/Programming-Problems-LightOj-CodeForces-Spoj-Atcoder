#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,temp,x,y,n,l,z;
    char s[2];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        int p[a+1];
        for(int j=0;j<a;j++)
        {
            cin>>p[j];
        }
        cin>>s;
        if(s[0]=='S')
        {
            cin>>a;
            for(int j=0;j<a;j++)
               p[j]+=a;

        }
        else if(s[0]=='M')
        {
            cin>>a;
            for(int j=0;j<n;j++)
            {
                p[j]*=a;
            }

        }
        else if(s[0]=='D')
        {
             cin>>a;
             for(int j=0;j<n;j++)
             {
                 p[j]/=a;
             }
        }
        else if(s[0]=='R')
        {
            for(int j=0,l=n-1;j<a/2;j++,l--)
            {
                temp=p[j];
                p[j]=p[l];
                p[l]=temp;
            }
        }
        else if(s[0]=='P')
        {
            cin>>y>>z;
            temp=p[x];
            p[x]=p[y];
            p[y]=temp;
        }
        cout<<"Case "<<i<<": "<<endl;
        for(int j=0;j<a;j++)
            cout<<p[j];

    }


}
