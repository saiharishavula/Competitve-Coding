#include<bits/stdc++.h>
using namespace std;
int binsearch(int a[],int n,int val)
{
  int s = 1;
  int e = n;
  int mid;
  while(s<e)
  {
    mid = (s+e)/2;
    if(a[mid]==val)
    return mid;
    else
    if(a[mid]<val)
    s = mid+1;
    else
    e = mid;
  }
  if(a[s]==val)
  return s;
  else
  return -1;
}
int main()
{
  int n,m;
  while(1)
  {
    cin>>n;
    if(n==0)
    break;
    int a[n+2],prev1=0,prev2=0;
    a[0]=0;
    long long ans=0;
    long long ans1[n+2];
    ans1[0]=0;
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
      ans1[i]=ans1[i-1]+a[i];
    }
    cin>>m;
    int b[m+2];
    b[0]=0;
    long long ans2[m+2];
    ans2[0]=0;
    for(int i=1;i<=m;i++)
    {
      cin>>b[i];
      ans2[i]=ans2[i-1]+b[i];
    }
    for(int i=1;i<=n;i++)
    {
      int temp = binsearch(b,m,a[i]);
      if(temp!=-1)
      {
        ans+=max(ans1[i]-ans1[prev1],ans2[temp]-ans2[prev2]);
        prev1 = i;
        prev2 = temp;
      }
    }
    ans+=max(ans1[n]-ans1[prev1],ans2[m]-ans2[prev2]);
    cout<<ans<<endl;
  }
}
