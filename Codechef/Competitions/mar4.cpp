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
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
      if(a[i]==a[i+1])
      {
        flag=0;
        cout<<a[i]<<endl;
        break;
      }
    }
    if(flag)
    {
      if(a[1]-a[0] != 1)
      cout<<a[0]<<endl;
      else
      cout<<a[n-1]<<endl;
    }
  }
}
