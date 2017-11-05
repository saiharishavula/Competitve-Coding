#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string y,s;
    cin>>s>>y;
    bool once = false;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='*' && y[i]=='*')
      once = true;
      else
      if(s[i]=='.' && y[i]=='.')
      s[i] = '.';
      else
      s[i] = '*';
    }
    int c = 0;
    if(once)
    c++;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='*')
      c++;
    }
    cout<<max(0,c-1)<<endl;
  }
}
