#include<bits/stdc++.h>
using namespace std;
void dfs(int i,bool visit[],vector<int> v[])
{
  visit[i] = true;
  for(int j=0;j<v[i].size();j++)
  if(!visit[v[i][j]])
  dfs(v[i][j],visit,v);
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,e;
    cin>>n>>e;
    vector<int> v[n+1];
    for(int i=0;i<e;i++)
    {
      int a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    bool visit[n+1]={0};
    int ans=0;
    for(int i=0;i<n;i++)
    {
      if(!visit[i])
      {
        ans++;
        dfs(i,visit,v);
      }
    }
    cout<<ans<<endl;
  }
}
