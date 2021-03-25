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

vector<int>graph[105];
int visit[105];

int src,chk;
void DFS(int start)
{
    if(src!=start||chk!=0)visit[start]=1;
    chk=1;
    for(int i=0; i<graph[start].size(); i++)
    {
        int v=graph[start][i];
        if(visit[v]==0)DFS(v);
    }
}
int main()
{

    int n,q,u,v;
    while(sc("%d",&n) && n!=0)
    {
        while(sc("%d",&u))
        {
            if(u==0)break;
            while(sc("%d",&v))
            {
                if(v==0)break;
                graph[u].pb(v);

            }
        }

        sc("%d",&q);
        for(int i=1; i<=q; i++)
        {

            sc("%d",&src);
            chk=0;
            DFS(src);
            vector<int>ans;
            int j;
            for(j=1; j<=n; j++)
            {
                //cout<<visit[j]<<' '<<j<<endl;
                if(visit[j]==0)
                {
                    //cout<<j<<endl;
                    ans.pb(j);
                }
            }
            ///cout<<endl;
            cout<<ans.size();
            for(int j=0; j<ans.size(); j++)
            {
             pf(" %d",ans[j]);
            }

            cout<<endl;
            for(int i=0; i<=105; i++)visit[i]=0;
        }

        for(int i=0; i<=n; i++)graph[i].clear();

    }

}

