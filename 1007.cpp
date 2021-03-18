#include <bits/stdc++.h>

using namespace std;

unsigned long long phi[5000005];
int mark[5000005];

void seivePhi()
{
    for(int i=2; i<=5000005; i++) phi[i] = i;
    for(int i=2; i<=5000005; i++){
        if(!mark[i]){
            for(int j=i; j<=5000005; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }

        }
    }
    for(long long int i=2;i<=5000005;i++)
    {
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }

}

int main()
{
    seivePhi();
    int n;
    unsigned long long p,m,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        m = phi[b]-phi[a-1];
        cout<<"Case "<<i<<": "<<m<<endl;
    }
}


