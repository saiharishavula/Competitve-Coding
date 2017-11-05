#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
vector<int> cost;
int visit[1001];
void dfs(int s,int &sum){
  visit[s]=true;
  sum+=cost[s-1];
  for(int i=0;i<adj[s].size();i++)
  {
    if(!visit[adj[s][i]])
    dfs(adj[s][i],sum);
  }
}
int main()
{
  int t;
  cin>>t;
  for(int T=1;T<=t;T++)
  {
    for(int i=0;i<1001;i++)
    adj[i].clear();
    cost.clear();
    int n,m;
    cin>>n>>m;
    fill(visit,visit+n+1,false);
    for(int i=0;i<n;i++){
      int v;
      cin>>v;
      cost.push_back(v);
    }
    while(m--){
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    vector<int> res;
    int sum=0,count=0;

    for(int i=1;i<=n;i++)
    {
      sum=0;
      if(!visit[i]){
      dfs(i,sum);
      res.push_back(sum);
      count++;
      }
    }
    sort(res.begin(),res.end());
    cout<<"Case "<<T<<": "<<count<<endl;
    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
    cout<<endl;


  }
}
