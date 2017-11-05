#include<bits/stdc++.h>
using namespace std;
vector<int> v[103];
void dfs(int val,bool visited[],int &count)
{
  count++;
  visited[val]=true;
  for(int i=0;i<v[val].size();i++)
  {
    if(!visited[v[val][i]])
    dfs(v[val][i],visited,count);
  }
  visited[val]=false;
}
int main()
{
  int n,m;
  cin>>n>>m;

  while(m--)
  {
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  bool visited[n+1];
  memset(visited,0,n+1);
  int ans=0;
  for(int j=1;j<=n;j++)
  {
    visited[j]=true;
  for(int i=0;i<v[j].size();i++)
  {
    int count=0;
    if(!visited[v[j][i]])
    dfs(v[j][i],visited,count);
    if(count%2==0 && count!=0)
    ans++;
  }
 }
  cout<<ans;
}
