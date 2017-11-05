#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[6102][6102];
int min1(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int t,len,j,k,i;
	scanf("%d",&t);
	char s[6102];
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		memset(dp,0,sizeof dp);
		for(i=1;i<len;i++)
		{
			for(j=0,k=i;k<len;k++,j++)
			{
				dp[j][k]=s[j]==s[k]?dp[j+1][k-1]:min1(dp[j][k-1],dp[j+1][k])+1;
			}
		}
		printf("%d\n",dp[0][len-1]);
		
	}
}
