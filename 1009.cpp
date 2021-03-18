#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100005];
int mark[100005],cnt=0;
void DFS(int start)
{
    mark[start]=1;
    for(int i=0;i<graph[start].size();i++)
    {
        int u=graph[start][i];
        if(mark[u] == 0){
            DFS(u);
            cnt++;

        }
    }
}
int main()
{
    int i,j,u,v,n,m,color=0,x=0;
    int arr[100005];
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        arr[u]=1;
        arr[v]=1;
        x=max(x,max(u,v));
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int>v1;
    for(i=1;i<=x;i++)
    {
        if(!mark[arr[i]]){
            DFS(arr[i]);
        }
        v1.push_back(cnt);
    }
    sort(v1.begin(),v1.end());
    cout<<v1[v1.size()-1];
    return 0;
}
