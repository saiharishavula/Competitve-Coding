#include<bits/stdc++.h>
#define MAX 100006
using namespace std;

int T,n,a[MAX];
long long int dp[MAX];
 // very gud n easy .
int main()
{
   scanf("%d",&T);
   while(T--)
   {
       scanf("%d",&n);
       memset(a,0,sizeof a);
       for(int i=0;i<n;i++) scanf("%d",&a[i]);
       memset(dp,0,sizeof dp);
       for(int i=n-1;i>=0;i--)
        dp[i]=max(a[i]+dp[i+2],max(a[i]+a[i+1]+dp[i+4],a[i]+a[i+1]+a[i+2]+dp[i+6]));

       printf("%lld\n",dp[0]);
   }
   return 0;
}
