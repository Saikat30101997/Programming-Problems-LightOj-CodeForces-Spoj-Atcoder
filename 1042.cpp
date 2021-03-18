#include<bits/stdc++.h>
using namespace std;
int Count(int n)
{
    int cnt=0;
    long long t=1;
    for(t=1;t<=n;t*=2)
    {
        if(n&t){
            cnt++;
        }
    }
    return cnt;
}

long long int Solution(long long int num)
{
    long long res,t;
    for(t=1;t<=num;t*=2)
    {
        if(num&t){
            res=num+t;
            break;

            }
    }
    int d = Count(num)-Count(res);
    for(int i=0;i<d;i++)
    {
        res+=(1<<i);
    }
    return res;
}

int main()
{
    int n,test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<Solution(n)<<endl;


    }
    return 0;

}
