#include<bits/stdc++.h>
using namespace std;
int a[11][11];
bool visit[11][11];
bool isvalid(int i,int j)
{
  if(i<=10 && i>=1 && j<=10 && j>=1 && a[i][j]==1)
  return true;
  return false;
}
int ans=0;
void dfs(int i,int j,int c)
{
  if(visit[i][j])
  {
    c--;
    ans = max(ans,c);
    return;
  }
  visit[i][j] = true;

  if(isvalid(i-1,j+2))dfs(i-1,j+2,c+1);
  if(isvalid(i-1,j-2))dfs(i-1,j-2,c+1);
  if(isvalid(i-2,j+1))dfs(i-2,j+1,c+1);
  if(isvalid(i-2,j-1))dfs(i-2,j-1,c+1);
  if(isvalid(i+1,j+2))dfs(i+1,j+2,c+1);
  if(isvalid(i+1,j-2))dfs(i+1,j-2,c+1);
  if(isvalid(i+2,j+1))dfs(i+2,j+1,c+1);
  if(isvalid(i+2,j-1))dfs(i+2,j-1,c+1);

  visit[i][j] = false;
}
int main()
{
  int T=1;
  while(1)
  {
    ans=0;
    int n;
    cin>>n;
    if(n==0)break;
    for(int i=0;i<=10;i++)
    for(int j=0;j<=10;j++)
    a[i][j] = 0 , visit[i][j] = false;
    int count=0;
    for(int i=1;i<=n;i++)
    {
      int x,y;
      cin>>x>>y;
      count+=y;
      for(int j=x+1;j<=x+y;j++)
      a[i][j] = 1;
    }

    bool found=false;
    for(int i=1;i<=10;i++)
    {
    for(int j=1;j<=10;j++)
    {
    if(a[i][j]==1)
    {
      dfs(i,j,1);
      found = true;
      break;
    }
    }
    if(found)break;
    }
    ans = (count-ans);
    if(ans==1)
    cout<<"Case "<<T<<", "<<ans<<" square can not be reached.\n";
    else
    cout<<"Case "<<T<<", "<<ans<<" squares can not be reached.\n";
    T++;
  }

}
