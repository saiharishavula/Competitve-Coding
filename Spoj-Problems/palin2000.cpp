#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[2][5001];
int min1(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int t,len,j,k,i;
	scanf("%d",&t);
	char s[5001];
		scanf("%s",s);
		//len=strlen(s);
		memset(dp,0,sizeof dp);
		for(i=t-1;i>=0;i--)
		{
			for(j=i+1;j<t;j++)
			{
				dp[i&1][j]=s[i]==s[j]?dp[(i+1)&1][j-1]:min1(dp[i&1][j-1],dp[(i+1)&1][j])+1;
			}
		}
		printf("%d\n",dp[0][t-1]);
		
	
} 
