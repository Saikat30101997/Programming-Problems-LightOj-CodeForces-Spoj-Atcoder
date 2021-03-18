#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define mp              make_pair
#define db              double
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define vi              vector< int >
#define vl              vector< ll >
#define vii             vector<vector< int > >
#define vll             vector<vector< ll > >
#define DBG             pf("HI\n")
#define MOD             1000000007
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

ll bigmod(ll a,ll p)
{
    ll q;
    if(p==0)
        return 1;
     if(p%2==0)
    {
        q = bigmod(a,p/2);
        q=((q%MOD)*(q%MOD))%MOD;
    }
    if(p%2==1)
    {
        q = bigmod(a,p-1);
        q = ((q%MOD)*(a%MOD))%MOD;

    }
    return q;
}



//int phi[MAX],sum[MAX];
#define MAX 10000

int phi[MAX],sum[MAX];
void Sievephi()
{
    ll i,j;
    phi[1]=1;
    for(i=2;i<MAX;i++)
    {
        if(phi[i]==0)
        {
            phi[i]=i-1;
            for(j=i*2;j<MAX;j+=i)
            {
                if(phi[j]==0)
                {
                    phi[j] = j;
                }
                    phi[j]/=i;
                    phi[j]*=i-1;

            }
        }
    }

}

vl v;
void divisors(ll n)
{
    //v.pb(1);
    for(ll i=1;i<sqrt(n+1);i++)
    {
        if(n%i==0)
        {
            if(n/i==i) v.pb(i);
            else
            {
                v.pb(i);
                v.pb(n/i);
            }

        }
    }
}

int main()
{
     Sievephi();
  //  void divisors();
    int tst;
    ll n,k;
    scin(tst);
    for(int t=1;t<=tst;t++)
    {

        ll p,q,r;
        scln(n);scln(k);
        //Sievephi(n);
        divisors(n);
        ll  sum = 0;
       // for(ll i=0;i<v.size();i++)cout<<v[i]<<' ';
        for(ll i=0;i<v.size();i++)
        {
            p = bigmod(k,n/v[i]);
           // cout<<p<<endl;
            q = phi[v[i]];
            //cout<<q<<endl;
           // cout<<p*q<<endl;
            sum = (sum+((p%MOD)*(q%MOD))%MOD)%MOD;
        }
        //cout<<sum<<endl;
        r = bigmod(n,MOD-2);
        ll ans = ((r%MOD)*(sum%MOD))%MOD;
        pf("Case %d: %lld\n",t,ans);
        v.clear();

    }
}
