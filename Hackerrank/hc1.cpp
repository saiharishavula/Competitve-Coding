#include<stdio.h>
long long int a[1000002];
long long int b[6];
long long int c[6];
int main()
{
	long long int n,i,j,k;
	int f1=0;
	int f2=0;
	int p1=0,p2=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		scanf("%lld",&b[i]);
		c[i]=b[i];
		
	}
	for(i=1;i<=n-4;i++)
	{
		p1=0;
		p2=0;
		for(j=i;j<=i+4;j++)
		{
			p1++;
			for(k=1;k<=5;k++)
			{
				if(a[j]==c[k])
				{
					c[k]=0;
					p2++;
					break;
				}
			}
			if(p2<p1)
			break;
			if(p2==5)
			{
				f1=1;
				break;
			}
			
		}
		if(f1==1)
		{
			printf("YES\n");
			break;
		}
		for(int h=1;h<=5;h++)
		c[h]=b[h];
	}
	if(f1==0)
	printf("NO\n");
	
	
	
}
