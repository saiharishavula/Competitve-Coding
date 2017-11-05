#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int x[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
bool issafe(int i,int j,int n)
{
  return (i>=0 && i<n && j>=0 && j<n && a[i][j]==-1);
}
void print(int n)
{
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++)
  cout<<a[i][j]<<" ";
  cout<<endl;}
}
bool backtrack(int i,int j,int n,int val)
{
  if(val == (n*n))
  return true;
  for(int k=0;k<8;k++)
  {
    int curr_x = i+x[k];
    int curr_y = j+y[k];
    if(issafe(curr_x,curr_y,n))
    {
      a[curr_x][curr_y] = val;
      if(backtrack(curr_x,curr_y,n,val+1))
      return true;
      else
      a[curr_x][curr_y] = -1;
    }
  }
  return false;
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
  a[i][j] = -1;
  a[0][0] = 0;
  if(backtrack(0,0,n,1))
  print(n);
  else
  cout<<"No solution\n";
}
