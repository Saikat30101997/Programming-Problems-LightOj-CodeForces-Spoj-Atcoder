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

#define MAX 700000

bool prime[MAX];
vector <ll>v;

void Sieve ()
{
    ll i,j;

    prime[0] = prime[1] = true;
    v.pb(2);

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2){
        if (prime[i]==false){
           for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=3; i<=MAX; i+=2)
        if (prime[i]==false)
            v.pb(i);
}

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
ll SOD(ll n,ll k)
{
    ll cnt=0,ans = 1,p=0,q=0,r=0,res;
    for(ll i=0;v[i]*v[i]<=n;i++)
    {
        if(n%v[i]==0)
        {
            cnt=0,p=0,q=0,r=0;
            while(n%v[i]==0)
            {
                n/=v[i];
                cnt++;
            }
           //cout<<cnt<<endl;
           p = bigmod(v[i],(cnt*k)+1)-1;
          // cout<<p<<endl;
           q = bigmod(v[i]-1,MOD-2);
           //cout<<q<<endl;
           ans = (ans*((p*q)%MOD))%MOD;
         //  p=0,q=0;
        }
    }

    if(n>1)
    {
           p = bigmod(n,k+1)-1;
           //cout<<p<<endl;
           q = bigmod(n-1,MOD-2);
           //cout<<q<<endl;
           ans = ((ans%MOD)*((p*q)%MOD))%MOD;
    }
    return ans;
}

int main()
{
    Sieve();
    int tst;
    ll n,k;
    scin(tst);
    for(int t=1;t<=tst;t++)
    {
        scln(n);
        scln(k);
        ll ans;
        if(n==MOD) ans=1;
        else ans = SOD(n,k);
        pf("Case %d: %lld\n",t,ans);
    }
}
