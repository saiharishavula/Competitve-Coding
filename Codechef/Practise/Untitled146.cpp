#include<stdio.h>
int dp[1001][1024];
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int t,n,k,i,j,max1,a[1001];
	scanf("%d",&t);
	while(t--)
	{   max1=0;
		scanf("%d%d",&n,&k);
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		dp[0][0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<1024;j++)
			{
				dp[i][j]=dp[i-1][j]|dp[i-1][j^a[i]];
			}
		}
		for(i=0;i<1024;i++)
		{
			if(dp[n][i])
			{
				max1=max(max1,k^i);
			}
		}
		printf("%d\n",max1);
	}
}
