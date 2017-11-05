#include<bits/stdc++.h>
using namespace std;
struct node{
  int a;
  int b;
  int c;
};
int n,m;
bool visit[502][502];
int mat[501][501];
bool isvalid(int i,int j)
{
  if(i>=1 && i<=n && j>=1 && j<=m && !visit[i][j])
  return true;
  return false;
}
void bfs(int max_val)
{
  queue<node> q;
  node temp;
  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
  if(mat[i][j] == max_val)
  {
    temp.a = i;
    temp.b = j;
    temp.c = 0;
    q.push(temp);
    visit[i][j] = true;
  }
  int count=0;
  while(!q.empty())
  {
    temp = q.front();
    q.pop();
    int i = temp.a;
    int j = temp.b;
    count = temp.c;

    if(isvalid(i+1,j))
    {
      temp.a = i+1;
      temp.b = j;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i-1,j))
    {
      temp.a = i-1;
      temp.b = j;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i,j+1))
    {
      temp.a = i;
      temp.b = j+1;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i,j-1))
    {
      temp.a = i;
      temp.b = j-1;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i+1,j-1))
    {
      temp.a = i+1;
      temp.b = j-1;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i-1,j+1))
    {
      temp.a = i-1;
      temp.b = j+1;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i-1,j-1))
    {
      temp.a = i-1;
      temp.b = j-1;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }
    if(isvalid(i+1,j+1))
    {
      temp.a = i+1;
      temp.b = j+1;
      temp.c = count+1;
        visit[temp.a][temp.b] = true;
      q.push(temp);
    }

  }
  cout<<count<<endl;

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    int max_val=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
    cin>>mat[i][j];
    visit[i][j] = false;
    max_val = max(max_val,mat[i][j]);
    }
    bfs(max_val);


  }
}
