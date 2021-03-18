#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,m,T;
    long long num,p,l;
    scanf("%d",&T);
    for(m=1; m<=T; m++)
    {
        scanf("%lld%lld",&p,&l);
        printf("Case %d:",m);
        num=p-l;
        if(num<=l||num==0)
        {
            printf(" impossible\n");
            continue;
        }

        long long sn = sqrt(num);
        vector<long long>ans;
        for(j=1; j<=sn; j++)
        {
            if(num%j==0)
            {
                ans.push_back(j);
                ans.push_back(num/j);
            }
        }
        sort(ans.begin(),ans.end());
        ans.resize(distance(ans.begin(), unique(ans.begin(),ans.end())));
        for(j=0; j<ans.size(); j++)
        {
            if(ans[j]>l)
            {
                printf(" %d",ans[j]);
            }
        }
        printf("\n");
        printf("%lld",ans.size());
        ans.clear();
    }
    return 0;
}


