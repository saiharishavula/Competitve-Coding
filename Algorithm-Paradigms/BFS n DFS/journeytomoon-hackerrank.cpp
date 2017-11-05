#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
vector<int> v[100005];
void dfs(int i,int n,bool visited[],vector<int> &temp)
{
  visited[i] = true;
  temp.push_back(i);
  for(int j=0;j<v[i].size();j++)
  {
  if(!visited[v[i][j]])
  dfs(v[i][j],n,visited,temp);
  }
}
int main()
{
  int n,p;
  int a,b;
  cin>>n>>p;
  bool visited[n+1];
memset(visited,0,sizeof(visited));

  while(p--)
  {
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for(int i=0;i<n;i++)
  {
    vector<int> temp;
    if(!visited[i])
    dfs(i,n,visited,temp);
    res.push_back(temp);
  }
  long long int sum=0;
  for(int i=0;i<res.size();i++)
  sum+=res[i].size();
  long long ans=0;
  for(int i=0;i<res.size();i++)
  {
    long long val = sum-res[i].size();
    ans+=(long long)(val*res[i].size());
  }
  cout<<ans/2<<endl;


}
