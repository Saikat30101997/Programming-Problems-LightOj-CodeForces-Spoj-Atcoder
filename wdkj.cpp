#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,cnt=0;
    cin>>n>>p;
    while(n>=p)
    {
        cnt++;
        n/=p;
    }
    cout<<cnt<<endl;
}
