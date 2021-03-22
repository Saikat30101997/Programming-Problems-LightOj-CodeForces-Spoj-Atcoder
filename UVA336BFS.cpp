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

map<int,int>visited;
void BFS(int S,map<int,vector<int> >graph)
{
    queue<int>q;
    q.push(S);
    visited[S]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int n=graph[u][i];
            if(!visited.count(n))
            {
                visited[n]=visited[u]+1;
                q.push(n);
            }
        }
    }
}
int main()
{
   int e,n,u,v,t=1;
   while(sc("%d",&e)==1)
   {
       if(e==0) break;
       map<int,vector<int> >graph;

       for(int i=0;i<e;i++)
       {
           sc("%d %d",&u,&v);
           graph[u].pb(v);
           graph[v].pb(u);
       }
       int source,ttl;
       while(sc("%d %d",&source,&ttl)==2)
       {
           if(source==0 && ttl==0)break;


           BFS(source,graph);
           int cnt=0;
           for(auto it=visited.begin();it!=visited.end();it++)
           {

               if((*it).second>ttl)cnt++;
           }
          cnt=cnt+graph.size()-visited.size();
          pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",t,cnt,source,ttl);
          t++;
          visited.clear();

       }
     
    }
}

/*
16
10 15
15 20
20 25
10 30
30 47
47 50
25 50
45 65
15 35
35 55
20 40
50 55
35 40
55 40
55 60
40 60
60 65
35 2
*/
