#include<bits/stdc++.h>
using namespace std;
int r,c;
bool ok=false;
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
string s="ALLIZZWELL";
bool isvalid(int i,int j)
{
  if(i>=0 && i<r && j>=0 && j<c)
  return true;
  return false;
}
void dfs(int i,int j,char a[][100],bool visit[][100],int count)
{
 count++;
 visit[i][j]=true;
 if(count==10)
 ok=true;
 for(int k=0;k<8;k++)
 {
   int ci = i+row[k];
   int cj = j+col[k];
   if(isvalid(ci,cj) && !visit[ci][cj] && s[count] == a[ci][cj])
   dfs(ci,cj,a,visit,count);
   if(ok)break;
 }
 visit[i][j]=false;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>r>>c;
    char a[100][100];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    cin>>a[i][j];
    bool visit[100][100]={false};
    ok=false;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    {
    int count=0;
    if(a[i][j]=='A')
    dfs(i,j,a,visit,count);
    if(ok)break;
    bool visit[100][100]={false};
    }
    if(ok)break;
    }
    if(ok)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    //cout<<endl;
  }
}
