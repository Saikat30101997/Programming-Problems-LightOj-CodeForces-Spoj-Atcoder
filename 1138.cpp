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

ll zero(ll x)
{
    ll ans = 0;
    for(ll i=5; x/i>0; i*=5)
    {
        ans += x/i;
    }

    return ans;
}


int main()
{
    int tst;
    ll n;

    scin(tst);
    for(int t=1; t<=tst; t++)
    {
        scln(n);
        ll x=0,low = 1,high=10000000000,mid,ans=10000000000;
        while(low<=high)
        {
            mid = (low+high)/2;
            x = zero(mid);
            //cout<<x<<endl;
            if(x==n)
            {
                if(mid<ans)
                    ans=mid;
                high = mid-1;
            }
            else if(x>n)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        pf("Case %d: ",t);
        if(ans==10000000000)
            pf("impossible\n");
        else
            pf("%lld\n",ans);

    }
}
