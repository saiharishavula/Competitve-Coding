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
    int x[n],y[n];
    long long x_e=0,x_o=0;
    long long y_e=0,y_o=0;
    for(int i=0;i<n;i++)
    {
      cin>>x[i];
      if((i+1)&1)
      x_o+=x[i];
      else
      x_e+=x[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>y[i];
      if((i+1)&1)
      y_o+=y[i];
      else
      y_e+=y[i];
    }
    cout<<min(x_o+y_e,y_o+x_e)<<endl;
  }
}
