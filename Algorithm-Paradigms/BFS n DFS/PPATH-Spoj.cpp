#include<bits/stdc++.h>
#include<string>
using namespace std;
bool prime[10005];
void prime_sieve()
{
  memset(prime,true,sizeof(prime));
  for(int i=2;i<=100;i++)
  {
    if(prime[i])
    {
      for(int j=2;j*i<=10000;j++)
      prime[j*i]=false;
    }
  }
}
void to_str(int temp,char s[])
{
    int c=3;
    while(temp)
    {
        s[c--]=(temp%10 + '0');
        temp/=10;
    }
}
int to_int(char s[])
{
  int ans=0;
  ans+=(1000*(s[0]-'0'));
  ans+=(100*(s[1]-'0'));
  ans+=(10*(s[2]-'0'));
  ans+=(1*(s[3]-'0'));
  return ans;
}
int main()
{
  prime_sieve();
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int count[10005];
    memset(count,-1,sizeof(count));
    count[a]=0;
    queue<int> q;
    q.push(a);
    while(!q.empty())
    {
      int temp = q.front();
      q.pop();
      char s[4];
      for(int i=0;i<4;i++)
      {
        to_str(temp,s);
        for(int j=0;j<10;j++)
        {
          if(i==0 && j==0)
          continue;
          s[i] = (j+'0');
          int val = to_int(s);
          if(prime[val] && count[val]==-1)
          {
          count[val] = count[temp]+1;
          q.push(val);
          }
        }
      }
    }
    if(count[b]==-1)
    cout<<"Impossible\n";
    else
    cout<<count[b]<<endl;
  }
}
