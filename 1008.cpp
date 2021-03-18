#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,temp;
    long long r,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        r=ceil(sqrt((double)(a)));
        if(r*r-a<r){
            x=r;
            y=r*r-a+1;
        }
        else
        {
            y=r;
            x = -r*r+2*r+a-1;
        }
        if(r&1)
        {
           temp=x;
           x=y;
           y=temp;
        }

        cout<<"Case "<<i<<": "<<x<<" "<<y<<endl;


    }

}
