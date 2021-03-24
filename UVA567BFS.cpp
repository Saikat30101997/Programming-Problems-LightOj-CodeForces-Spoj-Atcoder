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

vector<int>v[25];
int visit[30];
int BFS(int source,int destination)
{
    for(int i=0;i<=25;i++)visit[i]=0;
    int ans=0;
    queue<int>q;
    q.push(source);
    visit[source]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++)
        {
            int v1=v[u][i];
            if(visit[v1]==0){
            visit[v1]=visit[u]+1;
            if(v1==destination)return visit[v1];
            q.push(v1);

            }

        }
    }


}

int main()
{

   int t,u,v1,x,source,dest,cnt=1;
   while(1)
   {

       for(int i=1;i<=19;i++)
       {
           if(sc("%d",&x)==EOF) return 0;

           for(int j=1;j<=x;j++)
           {
              sc("%d",&u);
              v[i].pb(u);
              v[u].pb(i);
           }
       }

       sc("%d",&t);
       pf("Test Set #%d\n",cnt++);

       for(int i=1;i<=t;i++)
       {
           sc("%d %d", &source,&dest);
           pf("%2d to %2d: %d\n",source,dest,BFS(source,dest));
       }

       for(int i=0;i<=25;i++){v[i].clear();}
       pf("\n");

   }

}

