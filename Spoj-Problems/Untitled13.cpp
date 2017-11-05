#include<iostream>
#include<cstdio>
using namespace std;
int max3(int x,int y,int z)
{
	if(x>y&&x>z)
	return x;
	else
	{
		if(y>z)
		return y;
		else
		return z;
	}
}
int main()
{
	int t,r,c,a[102][102],i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&r,&c);
		for(i=0;i<=c+1;i++)
		{
		   a[r+1][i]=0;	
		   a[0][i]=0;
		   
		}
		
		for(i=0;i<=r+1;i++)
		{
			a[i][c+1]=0;
			a[0][i]=0;
		}
		
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				scanf("%d",&a[i][j]);
				
			}
		}
		for(i=r;i>=1;i--)
		{
			for(j=c;j>=1;j--)
			{
				a[i][j]+=max3(a[i+1][j-1],a[i+1][j],a[i+1][j+1]);
			}
		}
		j=a[1][1];
		for(i=1;i<=c;i++)
		{
			if(j<a[1][i])
			j=a[1][i];
		}
		printf("%d\n",j);
		
		
	}
}
