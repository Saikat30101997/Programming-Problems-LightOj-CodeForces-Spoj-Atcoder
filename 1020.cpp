#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,p;
    cin>>p;
    string s;

    for(int i=1;i<=p;i++)
    {
        cin>>n>>s;
        if(s[0]=='A')
        {
            if(n%3==1)
                cout<<"Case "<<i<<": "<<"Bob"<<endl;
            else
                cout<<"Case "<<i<<": "<<"Alice"<<endl;
        }
        else if(s[0]=='B')
        {
            if(n%3==0)
                 cout<<"Case "<<i<<": "<<"Alice"<<endl;
            else
                 cout<<"Case "<<i<<": "<<"Bob"<<endl;
        }
    }
}
