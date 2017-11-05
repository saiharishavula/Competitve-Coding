#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p,q;
  cin>>n>>p>>q;
  int a[p+1];
  int b[q+1];
  for(int i=0;i<p;i++)
  cin>>a[i];
  for(int i=0;i<q;i++)
  cin>>b[i];
  vector<int> res;
  int count[n+1]={0};
  for(int i=0;i<p;i++)
  {for(int j=0;j<q;j++)
   {
     res.push_back(n-(a[i]+b[j])%n);
     count[(n-(a[i]+b[j])%n)]++;
   }
  }
  sort(res.begin(),res.end());
  int ans=1;
  for(int i=0;i<res.size();i++)
  {
    if(ans<res[i])
    break;
    if(ans>res[i])
    continue;
    ans++;
  }
  if(ans<=n)
  cout<<ans<<endl;
  else
  {
    int index=1;
    int min_c = INT_MAX;
    for(int i=1;i<=n;i++)
    {
      if(count[i]<min_c)
      {
        min_c=count[i];
        index=i;
      }
    }
    cout<<index<<endl;
  }
}
