#include<bits/stdc++.h>
using namespace std;
string s[105];
int n,m,k;
int x,y;
bool found = false;
bool isvalid(int i,int j)
{
  if(i<n && i>=0 && j<m && j>=0 && s[i][j]=='.')
  return true;
  return false;
}
bool visit[105][105] = {0};

void dfs(int i,int j,int count)
{
  if(visit[i][j])
  {
    if(x==i && y==j)
    {
    if(count>=k)
    found = true;
    }
    return;
  }
  visit[i][j] = true;

  if(isvalid(i,j+1))dfs(i,j+1,count+1);
  if(isvalid(i-1,j))dfs(i-1,j,count+1);
  if(isvalid(i,j-1))dfs(i,j-1,count+1);
  if(isvalid(i+1,j))dfs(i+1,j,count+1);
  visit[i][j]=false;
}
int main()
{
  cin>>n>>m;
  cin>>k;
  cin>>x>>y;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  cin>>s[i][j];
  x--;
  y--;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  visit[i][j]=false;

  dfs(x,y,0);

  if(found || k==0)
  cout<<"YES";
  else
  cout<<"NO";
}
