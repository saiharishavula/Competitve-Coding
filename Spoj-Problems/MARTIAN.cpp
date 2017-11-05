#include<bits/stdc++.h>
using namespace std;
int a[502][502];
int b[502][502];
int dp[502][502];
int sum_a[502][502];
int sum_b[502][502];
int main(){
int n,m;
while(1){

  cin>>n>>m;
  if(n==0 && m==0)
  break;

  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
  cin>>b[i][j];
  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
  cin>>a[i][j];
  for(int i=0;i<=m;i++)
  dp[0][i]=0,sum_a[0][i]=0;
  for(int i=0;i<=n;i++)
  dp[i][0]=0,sum_b[i][0]=0;

  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
  sum_a[i][j] = sum_a[i-1][j]+a[i][j];
  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
  sum_b[i][j] = sum_b[i][j-1]+b[i][j];

  for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++){
    dp[i][j] = max(dp[i][j-1]+sum_a[i][j],dp[i-1][j]+sum_b[i][j]);
  }
  cout<<dp[n][m]<<endl;
}
}
