#include<bits/stdC++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    char s[1000][1000];
    for(int i=0;i<n;i++)
    cin>>s[i];
    bool ans = true;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(s[i][j] == 'B' && i!=(n-1))
        {
          if(s[i+1][j]=='W' || s[i+1][j]=='A')
          ans = false;
        }
        if(s[i][j] == 'W' )
        {
           if( (i== (n-1)) || (j== (m-1)))
          ans = false;
          else
          {
            if(s[i][j-1]=='A' || s[i][j+1]=='A' || s[i-1][j]=='A')
            ans = false;
          }
        }
      }
    }
    if(ans)
    cout<<"yes\n";
    else
    cout<<"no\n";
  }
}
