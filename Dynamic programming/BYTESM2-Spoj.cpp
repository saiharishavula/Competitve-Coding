#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    int dp[n+1][m+1];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
      cin>>a[i][j];
      dp[i][j] = a[i][j];
    }

    for(int i=n-1;i>=1;i--)
    for(int j=1;j<=m;j++)
    {
      int temp = dp[i+1][j];
      if(j+1 <= m)
      temp = max(temp,dp[i+1][j+1]);
      if(j-1 >= 1)
      temp = max(temp,dp[i+1][j-1]);
      dp[i][j]+=temp;
    }
    int ans=0;
    for(int i=1;i<=m;i++)
    if(ans<dp[1][i])
    ans = dp[1][i];
    cout<<ans<<endl;
  }
}
