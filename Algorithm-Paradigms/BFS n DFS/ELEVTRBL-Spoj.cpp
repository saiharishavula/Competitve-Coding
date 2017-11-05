#include<bits/stdc++.h>
using namespace std;
int f,s,g,u,d;
bool found = false;
int ans=0;
bool visit[1000002]={false};
void bfs()
{
  if(g==s)
  {
    ans++;
    found = true;
    return;
  }
  if(!u && !d)
  {
    found=false;
    return;
  }
  queue<int> q;
  q.push(s);
  visit[s]=true;
  int size=1,level=1;
  while(!q.empty())
  {
    ans++;
    level = size;
    size=0;
    while(level--)
    {
    int temp = q.front();
    if(temp==g)
    {
    found = true;
    break;
    }
    q.pop();
    if((temp+u)<=f && u!=0 && !visit[temp+u])
    q.push(temp+u),size++,visit[temp+u] = true;;
    if((temp-d)>=1 && d!=0 && !visit[temp-d])
    q.push(temp-d),size++,visit[temp-d] = true;;
    }
    if(found)
    break;
  }
}
int main()
{
  cin>>f>>s>>g>>u>>d;
  bfs();
  if(found)
  cout<<ans-1;
  else
  cout<<"use the stairs";
}
