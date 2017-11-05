#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n+2];
  int ans[n+2];
  ans[0] = 0;
  for(int i=1;i<=n;i++)
  {
  cin>>a[i];
  if(a[i]==1)
  ans[i] = a[i-1]+1;
  else
  ans[i] = ans[i-1];
  }
  int c=0;
  int final=0;
  for(int i=1;i<=n;i++)
  {
    c=0;
  for(int j=i;j<=n;j++)
  {
    if(a[j]==0)
    c++;
    int temp =0;
    for(int k=1;k<=n;k++)
    {
      if(k>=i && k<=j)
      continue;
      if(a[k]==1)
      temp++;
    }
     temp+= c;
    if(final<temp)
    final = temp;
  }
  }
  cout<<final;

}
