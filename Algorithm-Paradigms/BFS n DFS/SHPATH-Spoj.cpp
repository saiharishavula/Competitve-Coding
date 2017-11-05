#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
int main()
{
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,a,b,q,start,end;
    cin>>n;
    vector<pair<int,int> >adj[n+1];
    vector<pair<int,int> >::iterator it;
    string s;
    map<string,int> m;
    for(int i=1;i<=n;i++)
    {
      cin>>s;
      m[s] = i;
      cin>>k;
      for(int j=1;j<=k;j++)
      {
        cin>>a>>b;
        adj[i].push_back(pair<int,int>(a,b));
      }
    }
    cin>>q;
    while(q--)
    {
      string x,y;
      cin>>x>>y;
      map<string,int>::iterator k;
      k = m.find(x);
      start = (*k).second;
      k = m.find(y);
      end = (*k).second;
      int dist[n+1];
      bool visit[n+1];
      for(int i=1;i<=n;i++)
      {
      dist[i] = INF;
      visit[i] = false;
      }
      dist[start] = 0;
      priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
      q.push(pair<int,int>(0,start));
      while(!q.empty())
      {
        int u = q.top().first;
        if(u == end)
        break;
        q.pop();
        visit[u] = true;
        for(int i=0;i<adj[u].size();i++)
        {
          int v = adj[u][i].first;
          int cost = adj[u][i].second;
          if(dist[v]>cost+dist[u] && !visit[v])
          dist[v] = cost+dist[u],q.push(pair<int,int>(dist[v],v));
        }
      }
      cout<<dist[end]<<endl;
    }
    for(int i=1;i<=n;i++)
    adj[i].clear();
    m.clear();
  }
}
