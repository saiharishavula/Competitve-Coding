#include<bits/stdc++.h>
using namespace std;
string s[1005];
int visit[1005][1005]={0};
int c=0,ans=0,n,m;
bool isvalid(int i,int j)
{
  if(i<n && i>=0 && j<m && j>=0)
  return true;
  return false;
}
void dfs(int i,int j)
{
  if(isvalid(i,j))
  {
    if(visit[i][j])
    {
      c = visit[i][j];
      return;
    }
    visit[i][j] = c;
    if(s[i][j]=='S')dfs(i+1,j);
    if(s[i][j]=='N')dfs(i-1,j);
    if(s[i][j]=='E')dfs(i,j+1);
    if(s[i][j]=='W')dfs(i,j-1);
    visit[i][j] = c;
  }

}
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
  cin>>s[i];
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  {
    if(!visit[i][j])
    {
      c = ans+1;
      dfs(i,j);
      if(c>ans)
      ans++;
    }
  }
  cout<<ans<<endl;
}
