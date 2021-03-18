#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int cnt=0;
    if( !x&&(x-1))
    {
        cnt=1;
        cout<<"yes\n";
        return 0;
    }
    if(cnt==0)
        cout<<"NO";
        return 0;
}
