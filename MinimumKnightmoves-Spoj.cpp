#include<bits/stdc++.h>
using namespace std;
struct Pair{
  int a;
  int b;
};
bool isvalid(int i,int j)
{
  if(i<=8 && i>=1 && j<=8 && j>=1)
  return true;
  return false;
}
int main()
{
  int row[9] = {0,2,2,-2,-2,1,1,-1,-1};
  int col[9] = {0,-1,1,-1,1,-2,2,-2,2};
  int t;
  cin>>t;
  while(t--){
    queue<Pair> q;
    string x,y;
    cin>>x>>y;
    Pair src;
    src.a = (8-(x[1]-'1'));
    src.b = (x[0]-'a'+1);

    Pair dest;
    dest.a = (8-(y[1]-'1'));
    dest.b = ((y[0]-'a')+1);
    q.push(src);

    int ans=0;
    bool visit[9][9] = {false};
    
    int size=1,level=1;
    bool found=false;
    while(!q.empty())
    {
      level = size;
      size=0;
      while(level--)
      {
        Pair temp = q.front();
        q.pop();
        if(temp.a==dest.a && temp.b==dest.b)
        {
          found=true;
          break;
        }
        int i = temp.a;
        int j = temp.b;
        visit[i][j] = true;
        for(int k=1;k<=8;k++)
        if(isvalid(i+row[k],j+col[k]) && !visit[i+row[k]][j+col[k]])
        {
          temp.a = i+row[k];
          temp.b = j+col[k];
          q.push(temp);
          size++;
        }
      }
      if(found)
      break;
      ans++;
    }
   cout<<ans<<endl;
  }
}
