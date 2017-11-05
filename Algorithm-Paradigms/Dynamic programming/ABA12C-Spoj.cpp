#include<bits/stdc++.h>
using namespace std;
#define INF 99999
// small correction - no need to consider n in the problem.
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[k+1];
    int dp[k+1];
    for(int i=1;i<=k;i++)
    {
      cin>>a[i];
    }
    dp[0]=0;
    for(int i=1;i<=k;i++)
    {
      int min_val = INF;
      for(int j=1;j<=k;j++)
      {
        if(a[j]==-1)
        continue;
        if(j>i)
        break;
        if(dp[i-j]!=-1)
        {
        min_val = min(min_val,(dp[i-j]+a[j]));
        }
      }

      if(min_val == INF)
      dp[i] = -1;
      else
      dp[i] = min_val;
    }
    cout<<dp[k]<<endl;
  }
  return 0;
}
