#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
  int n,c=1;
  while(1) {
  cin>>n;
  if(n==0)break;
    int cost[n+2];
    for(int i=1;i<=n;i++)
    cost[i]=0;
    int total=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
    scanf("%d",&a[i][j]);
     total+=a[i][j];
      cost[j]+=a[i][j];
      cost[i]-=a[i][j];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
      if(cost[i]>0)
      ans+=cost[i];
    }
    printf("%d. %d %d\n",c,total,ans);
    c++;
  }
}
