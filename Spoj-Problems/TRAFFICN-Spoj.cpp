#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define pair pair<int,int>
int n;
// very gud problem of dijkstra

void dijkstra(int src,int dist[],vector<pair> adj[])
{
  bool visit[n+1];
  for(int i=1;i<=n;i++)visit[i]=false;
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
      dist[v] = dist[u]+len , q.push(pair(dist[v],v));
    }
  }

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int m,k,s,t;
    cin>>n>>m>>k>>s>>t;
    int src_dist[n+1];
    int dest_dist[n+1];
    vector<pair> src_adj[n+1];
    vector<pair> dest_adj[n+1];
    for(int i=1;i<=n;i++)src_adj[i].clear(),dest_adj[i].clear(),src_dist[i]=INF,dest_dist[i]=INF;
    while(m--)
    {
      int u,v,w;
      cin>>u>>v>>w;
      src_adj[u].push_back(pair(v,w));
      dest_adj[v].push_back(pair(u,w));
    }
    dijkstra(s,src_dist,src_adj);
    dijkstra(t,dest_dist,dest_adj);
    int ans = INF;
    while(k--)
    {
      int u,v,w;
      cin>>u>>v>>w;
      ans = min(ans,min(src_dist[u]+w+dest_dist[v] , src_dist[v]+w+dest_dist[u]));
    }
    ans = min(ans,src_dist[t]);
    if(ans==INF)
    cout<<"-1\n";
    else
    cout<<ans<<endl;
  }

}
