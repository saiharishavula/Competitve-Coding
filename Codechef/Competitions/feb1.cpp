#include<bits/stdc++.h>
using namespace std;
bool my(long long x,long long y)
{
  return x<y;
}
long long max1(long long x,long long y)
{
  if(x>y)
  return x;
  else
  return y;
}
long long min1(long long x,long long y)
{
  if(x<y)
  return x;
  else
  return y;
}
int main()
{
  long long n,l,r;
  cin>>n;
  cin>>l;
  cin>>r;
  vector<long long> a;
  long long temp=0;
  for(int i=0;i<n;i++){
  long long p;
  cin>>p;
  a.push_back(p);
  if(temp<a[i])
  temp = a[i];
  }

  sort(a.begin(),a.end(),my);
  vector<long long> s;
  vector<long long> e;
  for(int i=0;i<n-1;i++)
  {
      temp = (a[i+1]-a[i]);

  long long start,end;
  temp = temp+1;
  start = max1(temp,l);
  temp = a[i]+a[i+1]-1;
  end = min1(r,temp);
  if(end>=start){
  s.push_back(start);
  e.push_back(end);
  }
  }
  for(int i=s.size()-1;i>0;i--){
    if(s[i]<=e[i-1] && s[i]<=s[i-1]){
      s[i-1] = s[i];
      e[i-1] = e[i];
      s.pop_back();
      e.pop_back();
    }
    else
    if(s[i]<=e[i-1]){
      e[i-1] = e[i];
      s.pop_back();
      e.pop_back();
    }
  }
  temp=0;
  for(int i=0;i<s.size();i++)
  {
    temp+=(e[i]-s[i]+1);
  }
  cout<<temp;

}
