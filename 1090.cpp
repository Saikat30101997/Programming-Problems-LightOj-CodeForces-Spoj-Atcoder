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

ll counter(ll k,ll p)
{
    ll res = 0;

    while(k>=p)
    {
        res+=k/p;
        k/=p;
    }
    return res;
}

ll calc(ll n,ll k)
{
    ll cnt = 0;
    while(n%k==0)
    {
        n/=k;
        cnt++;
    }
    return cnt;
}


int main()
{
    int tst;
    scin(tst);
    ll n,r,p,q;
    for(int t=1;t<=tst;t++)
    {
        sc("%lld %lld %lld %lld",&n,&r,&p,&q);
        ll a = counter(n,2);
        cout<<a<<endl;
        ll b = counter(n,5);
        cout<<b<<endl;
        ll c = counter(r,2);
        cout<<c<<endl;
        ll d = counter(r,5);
        cout<<d<<endl;
        ll e = counter(n-r,2);
        cout<<e<<endl;
        ll f = counter(n-r,5);
        cout<<f<<endl;
        ll ans1 = a-(c+e);
        ll ans2 = b-(d+f);
        ll g = calc(p,2)*q;
        ll h = calc(p,5)*q;
        ll ans3 = ans1+g;
        ll ans4 = ans2+h;
        ll ans = min(ans3,ans4);

        pf("Case %d: %lld\n",t,ans);
    }
}
