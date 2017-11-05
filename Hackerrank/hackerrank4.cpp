#include<bits/stdc++.h>
using namespace std;
vector<int> v[100005];
long long min1(long long x,long long y)
{
  if(x<y)
  return x;
  else
  return y;
}
void dfs(int i,bool visited[],long long &count)
{
  count++;
  visited[i] = true;
  for(int j=0;j<v[i].size();j++)
  {
    if(!visited[v[i][j]])
    dfs(v[i][j],visited,count);
  }
}
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
    int n,m;
    cin>>n>>m;
    bool visited[n+1];
    for(int i=0;i<=n;i++)
    visited[i]=false;
    long long road,lib;
    cin>>lib>>road;
    long long ans=0;
    while(m--)
    {
      int a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
      long long count=0;
      if(!visited[i])
      {
      dfs(i,visited,count);
      ans+=min1(lib*count,lib+road*(count-1));
      }
    }
    cout<<ans<<endl;
    for(int i=0;i<=n;i++)
    v[i].clear();
  }
}
