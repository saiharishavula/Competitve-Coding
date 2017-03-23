#include<bits/stdc++.h>
using namespace std;
string s[251];
int n,m;
void dfs(int i,int j,int &sheep,int &wolf)
{
  if(s[i][j]=='k')
  sheep++;
  if(s[i][j]=='v')
  wolf++;
  s[i][j]='#';
  if(i+1<n && s[i+1][j]!='#')dfs(i+1,j,sheep,wolf);
  if(i>0 && s[i-1][j]!='#')dfs(i-1,j,sheep,wolf);
  if(j+1<m && s[i][j+1]!='#')dfs(i,j+1,sheep,wolf);
  if(j>0 && s[i][j-1]!='#')dfs(i,j-1,sheep,wolf);
}
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
  cin>>s[i];
  int final_sheep=0,final_wolf=0;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  {
    int sheep=0,wolf=0;
    if(s[i][j]!='#')
    dfs(i,j,sheep,wolf);

    if(sheep>wolf)
    final_sheep+=sheep;
    else
    final_wolf+=wolf;
  }
  cout<<final_sheep<<" "<<final_wolf;
}
