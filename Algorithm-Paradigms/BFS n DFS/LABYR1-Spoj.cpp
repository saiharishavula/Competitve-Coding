#include<bits/stdc++.h>
using namespace std;
string s[1005];
int ans=0;
int n,m;
bool check[1005][1005];
static int row[4]={1,-1,0,0};
static int col[4]={0,0,1,-1};
bool isvalid(int i,int j)
{
  if(i<n && i>=0 && j<m && j>=0 && s[i][j]=='.')
  return true;
  return false;
}
int dfs(int i,int j)
{
  int first=-1,second=-1;
  check[i][j] = true;
  for(int k=0;k<4;k++)
  {
    if(!check[i+row[k]][j+col[k]] && isvalid(i+row[k],j+col[k]))
    {
    int temp = dfs(i+row[k],j+col[k]);
    if(temp>=first)
    {
      second = first;
      first = temp;
    }
    else
    if(temp>second)
    second = temp;
    }
  }
  ans = max(ans,first+second+2);
  return first+1;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
  cin>>m>>n;
  ans=0;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  check[i][j]=false;
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  if(!check[i][j] && isvalid(i,j))
  dfs(i,j);
  cout<<"Maximum rope length is "<<ans<<endl;
  }
}
