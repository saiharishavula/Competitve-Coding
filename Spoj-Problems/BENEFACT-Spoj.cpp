#include<bits/stdc++.h>
using namespace std;
#define pair pair<int,int>
//weighted tree
vector<pair> adj[50005];
int ans=0;
bool check[50005];
int dfs(int root){
  int val,first_max = 0,second_max = 0;
  //first_max - maximum distance node from the root
  //second_max - maximum distance node from the root if exists
  check[root] = true;
  for(int i=0;i<adj[root].size();i++)
  {
    if(!check[adj[root][i].first]){
      val =adj[root][i].second + dfs(adj[root][i].first);
      if(val>=first_max)
      {
        second_max = first_max;
        first_max = val;
      }
      else
      if(second_max<val)
      second_max = val;
    }
  }
  ans = max(ans,first_max+second_max);
  return first_max;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
  ans=0;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  adj[i].clear(),check[i]=false;
  for(int i=0;i<n-1;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back(pair(v,w));
    adj[v].push_back(pair(u,w));
  }
  dfs(1);
  cout<<ans<<endl;
  }
}
