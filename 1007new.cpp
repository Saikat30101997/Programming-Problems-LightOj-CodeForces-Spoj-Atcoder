#include <bits/stdc++.h>

using namespace std;

unsigned long long int phi[5000005];
int mark[5000005];

void seivePhi()
{
    for(int i=2; i<=5000002; i++) phi[i] = i;
    for(int i=2; i<=5000002; i++)
        if(!mark[i])
            for(int j=i; j<=5000002; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }
    for(long long int i=3; i<5000002; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }

}
int main()
{
    seivePhi();
    int tst;
    unsigned long long int ans, a, b;
    scanf("%d", &tst);
    for(int i=1; i<=tst; i++)
    {
        scanf("%llu%llu", &a, &b);
        ans = phi[b] - phi[a-1];
        printf("Case %d: %llu\n", i, ans);
    }
    return 0;
}

