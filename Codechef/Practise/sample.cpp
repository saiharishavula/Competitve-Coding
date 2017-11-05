#include<bits/stdc++.h>
using namespace std;
int dp[2001][2001];
long long int a[2001];
int recurseDP(int x,int y,int k)
{
  if(dp[x][y]!=0)
  return dp[x][y];
  if(x>y)
  return 0;
  dp[x][y] = max(a[y]*k+recurseDP(x,y-1,k+1),a[x]*k+recurseDP(x+1,y,k+1));
  return dp[x][y];
}
int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  cin>>a[i];
  for(int i=0;i<=n;i++)
  for(int j=0;j<=n;j++)
  dp[i][j] = 0;
  cout<<recurseDP(1,n,1)<<endl;
  //cout<<dp[1][n]<<endl;
}

}
