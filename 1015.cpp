#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    int p,q,t=1;
    cin>>n;
    while(n--)
    {
        cin>>p;
        while(p--)
        {
            cin>>q;
            if(q>0)
                sum+=q;
        }
        cout<<"Case "<<t++<<": "<<sum<<endl;
        sum=0;
    }

}
