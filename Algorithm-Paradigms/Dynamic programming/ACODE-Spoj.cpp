#include<bits/stdc++.h>
using namespace std;
// gud problem.
int main()
{
  string s;
  while(1)
  {
    cin>>s;
    if(s[0]=='0')break;
    int n = s.length();
    long long dp[n];
    memset(dp,0,sizeof(dp)); // because there can invalid strings too (example: 502)
    dp[0]=1;
    for(int i=1;i<n;i++)
    {
      int val = (s[i-1]-'0')*10 + (s[i]-'0');
      if((s[i]-'0'))
      dp[i] = dp[i-1];
      if(val>=10 && val <= 26)
      dp[i]+=dp[(i-2)<0?0:i-2];
    }
    cout<<dp[n-1]<<endl;
  }
}
