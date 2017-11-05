#include<stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int t1,n,w,c[101],p[101],t[101],i,dp[101][101];
	scanf("%d",&t1);
	while(t1--)
	{
		scanf("%d%d",&n,&w);
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d",&c[i],&p[i],&t[i]);
			c[i]=c[i]*p[i];
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=w;j++)
			{
				if(i==0||j==0)
				dp[i][j]=0;
				else
				if(t[i-1]>j)
				dp[i][j]=dp[i-1][j];
				else
				dp[i][j]=max(c[i-1]+dp[i-1][j-t[i-1]],dp[i-1][j]);
				
			}
		}
		printf("%d\n",dp[n][w]);
		
	}
}
