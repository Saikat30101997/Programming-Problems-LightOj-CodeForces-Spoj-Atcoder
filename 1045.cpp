#include<bits/stdc++.h>
using namespace std;
double f[1000010];
int main()
{
    int n,p,q;
    long long ans;
    for(int i=1;i<=1000000;i++)
        f[i]=log(i)+f[i-1];

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>q;
        ans = (long)((f[p]/log(q))+1);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

}
