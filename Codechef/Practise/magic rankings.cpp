#include<stdio.h>
int a[101][101];
long long int b[101][101];
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<=n;i++)
		{
			b[0][i]=-1000000000;
			b[i][0]=-1000000000;
		}
		for(i=1;i<=n;i++)
		{   
			for(j=1;j<=n;j++)
			{   
			    if(i==1&&j==1)
			    b[i][j]=a[i][j];
			    else
				b[i][j]=max(b[i-1][j],b[i][j-1])+a[i][j];   
			}
		}
		if(b[n][n]<0)
		printf("Bad Judges\n");
		else
		printf("%0.6f\n",(double)b[n][n]/((2*n)-3));
		
	}
}
