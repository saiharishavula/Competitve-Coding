#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
int ans=0;
bool check[10005]={0};
int dfs(int root){
  int val,first_max = -1,second_max = -1;
  //first_max - maximum distance node from the root
  //second_max - maximum distance node from the root if exists
  check[root] = true;
  for(int i=0;i<v[root].size();i++)
  {
    if(!check[v[root][i]]){
      val = dfs(v[root][i]);
      if(val>=first_max)
      {
        second_max = first_max;
        first_max = val;
      }
      else
      if(second_max<val)
      second_max = val;
    }
  }
  ans = max(ans,first_max+1+second_max+1);
  return first_max+1;
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  dfs(n);;
  cout<<ans;
}
