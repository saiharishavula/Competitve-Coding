#include<bits/stdc++.h>
using namespace std;
bool visit[2][502];
int n;
int max_val;
bool isvalid(string s[],int i,int j)
{
  if(i>=0 && i<=1 && j>=0 && j<n && s[i][j]=='#')
  return true;
  return false;
}
void dfs(string s[],int i,int j,int c)
{
//  cout<<c<<endl;
  visit[i][j] = true;
  c++;
  if(max_val<c)
  max_val = c;
  if(isvalid(s,i+1,j) && !visit[i+1][j])dfs(s,i+1,j,c);
  if(isvalid(s,i-1,j) && !visit[i-1][j])dfs(s,i-1,j,c);
  if(isvalid(s,i,j+1) && !visit[i][j+1])dfs(s,i,j+1,c);
  if(isvalid(s,i,j-1) && !visit[i][j-1])dfs(s,i,j-1,c);

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n;
    string s[2];
    for(int i=0;i<2;i++)
    cin>>s[i];
    for(int i=0;i<2;i++)
    for(int j=0;j<n;j++)
    visit[i][j]=false;
    int count=0;
    for(int i=0;i<2;i++)
    for(int j=0;j<n;j++)
    if(s[i][j]=='#')
    count++;

    max_val=0;

    for(int i=0;i<2;i++)
    for(int j=0;j<n;j++)
    if(s[i][j]=='#')
    {
      memset(visit,0,sizeof(visit));
    dfs(s,i,j,0);

    }
    //cout<<count<<" "<<max_val<<endl;
    if(max_val!=count)
    cout<<"no\n";
    else
    cout<<"yes\n";
  }
}
