#include<bits/stdc++.h>
#include<list>
using namespace std;
list<int> *adj;
int n,k;
vector<vector<int> > res;
void DFS(int v, bool visited[],vector<int> &temp)
{
    visited[v] = true;
    temp.push_back(v);
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFS(*i, visited,temp);
}
void connectedComponents()
{
    bool *visited = new bool[n];
    for(int v = 0; v < n; v++)
        visited[v] = false;

    for (int v=0; v<n; v++)
    {
        if (visited[v] == false)
        {
            vector<int> temp;
            DFS(v, visited,temp);
            res.push_back(temp);
        }
    }
}
int main()
{
cin>>n>>k;
adj = new list<int>[n];
for(int i=0;i<k;i++)
{
  int a,b;
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
}
connectedComponents();
long long sum=0;
for(int i=0;i<res.size();i++)
{
  int size = res[i].size();
  sum+=(size*(n-size));
}
cout<<sum/2<<endl;
}
