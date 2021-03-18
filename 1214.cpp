#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    long long int a,b,c,d;
    string s;
    for(i=1;i<=n;i++)
    {
        cin>>s>>b;
        if(s[0]=='-')
        {
            j=1;
        }
        else
        {
            j=0;
        }
        if(b<0)
        {
            b=b*(-1);
        }
        int k=0;
        for(c=j;c<s.size();c++)
        {
            k=k*10+(s[c]-'0');
            k=k%b;

        }
        if(k)
        {
            printf("Case %d: not divisible\n",i);
        }
        else
            printf("Case %d: divisible\n",i);
    }
}

