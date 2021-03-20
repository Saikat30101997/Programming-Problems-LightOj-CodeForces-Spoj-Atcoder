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
//#define mx              1234567899
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

int dis[30005],vis[30005];
vector<int>graph[30005];
vector<int>cst[30005];
void BFS(ll source)
{
     for(int i=0; i<=30005; i++)
        {
            vis[i]=0;
            dis[i]=10000000000LL;
        }
    queue<int>q;
    q.push(source);
    dis[source]=0;
    vis[source]=1;
    while(!q.empty())
    {


        int u=q.front();
        int ucst=dis[u];
        q.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];

            if(vis[v]==0)
            {
                vis[v]=1;
                dis[v]=cst[u][i]+ucst;
                q.push(v);
            }

        }
    }
}
int main()
{
    int t;
    sc("%d",&t);
    int tst=1;
    while(t--)
    {
        int n;
        sc("%d",&n);
        int u,v,c;
        for(int i=1; i<=n-1; i++)
        {
            sc("%d %d %d",&u,&v,&c);
            graph[u].pb(v);
            graph[v].pb(u);
            cst[u].pb(c);
            cst[v].pb(c);

        }
        BFS(0);
        int mx=0;
        int strt;
        for(int i=0; i<n; i++)
        {
            if(dis[i]>mx)
            {
                mx=dis[i];
                strt=i;
            }
        }
        mx=0;
        BFS(strt);
        for(int i=0; i<n; i++)
        {
            mx=max(mx,dis[i]);
        }

        pf("Case %d: %ld\n",tst,mx);
        for(int i=0; i<n; i++)
        {
            dis[i]=0;
            graph[i].clear();
            cst[i].clear();

        }
        tst++;

    }

}
