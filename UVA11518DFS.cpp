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
vector<int>graph[100005];
int visit[100005];
int chk,src;
int total=0;
void DFS(int source)
{
    total++;
    visit[source]=1;

    for(int i=0; i<graph[source].size(); i++)
    {
        int v=graph[source][i];
        if(visit[v]==0)
            DFS(v);

    }
}

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m,l;
        cin>>n>>m>>l;
        int u,v;
        for(int i=1; i<=m; i++)
        {
            cin>>u>>v;
            graph[u].pb(v);

        }
        int x;
        for(int i=1; i<=l; i++)
        {

            cin>>src;
            if(visit[src]==0)DFS(src);

        }
        cout<<total<<endl;

        total=0;
        for(int i=0; i<=n; i++){graph[i].clear();visit[i]=0;}

    }

}
