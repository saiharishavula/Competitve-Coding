#include<bits/stdc++.h>
using namespace std;
// slight implementation of bfs
// color the vertices alternatively. if something goes wrong, break out of loop.
int main(){
  int t;
  cin>>t;
  for(int k=1;k<=t;k++){
    int n,m;
    cin>>n>>m;
    vector<int> v[n+2];
    while(m--){
      int a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    int visit[n+1];
    memset(visit,-1,sizeof(visit));
    bool ans = true;
    int val;
    for(int i=1;i<=n;i++)
    {
      if(!v[i].size()) continue;

      if(visit[i]!=-1)
      val = 1-visit[i];
      else
      {
          val = 1;
          visit[i] = 1-val;  // if i is not yet visited then its obvious that all its adjecent nodes are not yet reached.
      }

      for(int j=0;j<v[i].size();j++){
        if(visit[v[i][j]]!=-1)
        {
        if(val!=visit[v[i][j]])
        {
        ans = false;
        break;
        }
        }
        else
        visit[v[i][j]] = val;
        }
        if(!ans)
        break;
    }
    cout<<"Scenario #"<<k<<":\n";
    if(ans)
    cout<<"No suspicious bugs found!";
    else
    cout<<"Suspicious bugs found!";
    cout<<endl;
  }
}
