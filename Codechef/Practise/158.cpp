#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int l=0,r=0,u=0,d=0;
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    bool flag=true;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='L')
      {
      l++;
      if(r)
      r--;
      }
      else
      if(s[i]=='R')
      {
      r++;
      if(l)
      l--;
      }
      else
      if(s[i]=='U')
      {
      u++;
      if(d)
      d--;
      }
      else
      if(s[i]=='D')
      {
      d++;
      if(u)
      u--;
      }
    }
    if((l+r)<m && (u+d)<n)
    cout<<"safe\n";
    else
    cout<<"unsafe\n";

  }
}
