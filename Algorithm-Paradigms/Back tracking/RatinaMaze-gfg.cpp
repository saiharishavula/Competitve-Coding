#include<bits/stdc++.h>
using namespace std;
int a[4][4]  =  { {1, 1, 1, 1},
                  {0, 0, 0, 1},
                  {0, 1, 1, 1},
                  {1, 1, 0, 1}
 };
 int res[4][4];
bool issafe(int i,int j,int n)
{
  return (i>=0 && i<n && j>=0 && j<n && a[i][j]==1);
}
void print(int n)
{
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++)
  cout<<res[i][j]<<" ";
  cout<<endl;}
}
bool backtrack(int i,int j,int n)
{
  if(i == n-1 && j == n-1)
  return true;
  if(issafe(i+1,j,n))
  {
      res[i+1][j] = 1;
      if(backtrack(i+1,j,n))
      return true;
  }
  if(issafe(i,j+1,n))
  {
      res[i][j+1] = 1;
      if(backtrack(i,j+1,n))
      return true;
  }
  return false;
}

int main()
{
  int n;
  cin>>n;
  for (int x = 0; x < n; x++)
		for (int y = 0; y < n; y++)
			res[x][y] = 0;
      res[0][0] = 1;
  if(backtrack(0,0,n))
  print(n);
  else
  cout<<"No solution\n";
}
