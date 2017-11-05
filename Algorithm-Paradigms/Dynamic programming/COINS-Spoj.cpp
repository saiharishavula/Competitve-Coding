#include<bits/stdc++.h>
using namespace std;
map<long long,long long> m;
long long dp(long long n)
{
  if(n<12)
  return n;
  if(m.find(n)!=m.end())
  return m[n];
  m[n] = max(n,dp(n/2) + dp(n/3) + dp(n/4));
  return m[n];
}
int main()
{
  long long n;
  while(cin>>n)
  { 
  cout<<dp(n)<<endl;
  }
}
