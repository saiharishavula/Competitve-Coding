#include<bits/stdc++.h>
using namespace std;
int n,m;
string s[25];
void dfs(int i,int j,int &out)
{
  //cout<<"p";
  if(s[i][j]=='.')
  {
    if(i==0 || i==n-1 || j==0 || j==m-1)
    {
    out++;
  //  cout<<i<<" "<<j<<endl;
    }
    s[i][j]='#';
  }
  if(i+1<n && s[i+1][j]=='.')dfs(i+1,j,out);
  if(i>0 && s[i-1][j]=='.')dfs(i-1,j,out);
  if(j+1<m && s[i][j+1]=='.')dfs(i,j+1,out);
  if(j>0 && s[i][j-1]=='.')dfs(i,j-1,out);

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    int in=0,out=0;
    for(int i=0;i<n;i++)
    cin>>s[i];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
      if(s[i][j]=='.' && (i==0 || i==n-1 || j==0 || j==m-1))
      {
        s[i][j]='#';
        in++;
      //  cout<<i<<" "<<j<<endl;
        dfs(i,j,out);
      //  cout<<in<<" "<<out<<endl;
      }
    }
    if(in==1 && out==1)
    cout<<"valid\n";
    else
    cout<<"invalid\n";
  }
}
