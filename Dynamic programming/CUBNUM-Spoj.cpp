#include<bits/stdc++.h>
using namespace std;
int dp[100005];
#define MAX 100005
int pow3(int x)
{
  return x*x*x;
}
void sieve()
{
  dp[0] = 0;
  for(int i=1;i<=MAX;i++)
  {
    int min_val = INT_MAX;
    for(int j=1;j<=MAX;j++)
    {
      int temp = pow3(j);
      if(temp > i)break;
      min_val = min(min_val,1+dp[i-temp]);
    }
    dp[i] = min_val;
  }
}
int main()
{
  sieve();
  int n;
  int c=1;
  while(scanf("%d",&n)!=EOF)
  {
    cout<<"Case #"<<c<<": "<<dp[n]<<endl;
    c++;
  }
}
