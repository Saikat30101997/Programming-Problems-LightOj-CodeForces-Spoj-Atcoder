#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,temp,x,y,n,l,z;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>d;
        int p[a+1];
        for(int j=0;j<a;j++)
        {
            cin>>p[j];
        }

        for(z=0;z<d;z++){
             cin>>s;
        if(s[0]=='S')
        {
            cin>>b;
            for(int j=0;j<a;j++)
               p[j]+=b;

        }
        else if(s[0]=='M')
        {
            cin>>b;
            for(int j=0;j<a;j++)
            {
                p[j]*=b;
            }

        }
        else if(s[0]=='D')
        {
             cin>>b;
             for(int j=0;j<a;j++)
             {
                 p[j]/=b;
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
        }
        cout<<"Case "<<i<<": "<<endl;
        for(int j=0;j<a;j++)
            cout<<p[j];

    }


}

