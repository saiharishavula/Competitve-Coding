#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(1)
  {
    int n;
    cin>>n;
    if(!n)break;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long int ans=0;
    for(int i=0;i<n-1;i++)
    {
      ans+=abs(a[i]);
      a[i+1] = a[i]+a[i+1];
    }
    cout<<ans<<endl;
  } 
}
