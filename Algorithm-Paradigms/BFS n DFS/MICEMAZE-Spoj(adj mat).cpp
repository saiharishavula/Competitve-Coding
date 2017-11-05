#include<bits/stdc++.h>
using namespace std;
int n,s,t;
// s - destination
// reverse the direction of given input edges and do dijkstra from destination
// this can be done by warshalls algo even of o(n^3) complexity
int a[102][103];
int minDistance(int dist[],bool visited[])
{
  long long int min = INT_MAX;
  int index;
  for(int i=1;i<=n;i++)
  if((min>=dist[i]) && (visited[i]==false))
  min = dist[i],index = i;

  return index;
}
int dijkstra()
{
  bool visited[n+3];
  int dist[n+3];

  for(int i=1;i<=n;i++)
  dist[i]=INT_MAX,visited[i]=false;
  dist[s] = 0;
  for(int i=1;i<=n;i++) //  for all vertices
  {

  int u = minDistance(dist,visited);
  visited[u] = true;
  for(int j=1;j<=n;j++)
  {
    if((a[u][j]!=0) && (dist[u]+a[u][j] < dist[j]))
    dist[j] = dist[u]+a[u][j];
  }
  }
  int count=0;
  for(int i=1;i<=n;i++)
  if(dist[i]<=t)count++;
  return count;
}
int main()
{

  cin>>n>>s>>t;

  for(int i=1;i<=n;i++)
  for(int j=1;j<=n;j++)
  a[i][j]=0;
  int m;
  cin>>m;
  while(m--)
  {
    int x,y,val;
    cin>>x>>y>>val;
    a[y][x] = val;
  }
  cout<<dijkstra()<<endl;

}
