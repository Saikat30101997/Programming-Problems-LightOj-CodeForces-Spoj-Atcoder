#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    for(int i = n;i<=m;i+=4)
    {
        if(i%400==0 || i%100!=0 && i%4==0)
            cnt++;
    }
    cout<<cnt<<endl;
}
