#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define pair pair<int,int>
int n;
// very gud problem of dijkstra

void dijkstra(int src,int dist[],vector<pair> adj[],vector<int> parent[])
{
  bool visit[n+1];
  for(int i=0;i<=n;i++)visit[i]=false;
  dist[src]=0;
  priority_queue<pair,vector<pair>,greater<pair> > q;
  q.push(pair(0,src));
  while(!q.empty())
  {
    int u = q.top().second;
    q.pop();
    if(visit[u])continue;
    visit[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
      int v = adj[u][i].first;
      int len = adj[u][i].second;
      if(dist[v]>dist[u]+len)
      {
      parent[v].clear();
      dist[v] = dist[u]+len , q.push(pair(dist[v],v)) , parent[v].push_back(u);
      }
      else
      if(dist[v] == dist[u]+len)
      parent[v].push_back(u);
    }
  }

}
int main()
{
  while(1)
  {
    int m,s,e;
    cin>>n>>m;
    if(n==0 && m==0)
    break;
    cin>>s>>e;
    int dist[n+1];
    vector<int> parent[n+1];
    vector<pair> adj[n+1];
    for(int i=0;i<=n;i++)adj[i].clear(),dist[i]=INF,parent[i].clear();
    while(m--)
    {
      int u,v,w;
      cin>>u>>v>>w;
      adj[u].push_back(pair(v,w));
    }
    dijkstra(s,dist,adj,parent);

      int u,v;
      // using the bfs to delete the edes.
      queue<int> q;
      q.push(e);
      while(!q.empty())
      {
        int v = q.front();
        q.pop();
        for(int k=0;k<parent[v].size();k++)
        {
        u = parent[v][k];
        for(int i=0;i<adj[u].size();i++)
        if(adj[u][i].first == v){
        adj[u][i].second = INF;
        if(u!=s)
        q.push(u);
        }
        }
      }
    // once again apply the dijkstra 
    for(int i=0;i<=n;i++)dist[i]=INF,parent[i].clear();
    dijkstra(s,dist,adj,parent);
    if(dist[e]==INF)
    cout<<"-1\n";
    else
    cout<<dist[e]<<endl;
  }

}
