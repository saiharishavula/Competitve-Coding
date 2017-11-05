#include<stdio.h>
#define M 1000000007
long long int a[100001];
int main()
{
	int t,x,n,i;
	long long int m,sum;
	scanf("%d",&t);
	while(t--)
	{   sum=0;
		scanf("%d%d%lld",&n,&x,&m);
		for(i=1;i<=n;i++)
		{
				scanf("%lld",&a[i]);
				a[i]=a[i]%M;
		}
		m=m%M;
		if(x==1)
		{
			printf("%lld\n",a[1]);
			continue;
			
		}
		if(x==2)
		{
		
			printf("%lld\n",(a[2]+((m*a[1])%M))%M);
			continue;
		}
		
	
		while(m--)
		{
			for(i=2;i<=n;i++)
			{
				a[i]=(a[i]+a[i-1])%M;
			}
		}
		printf("%lld\n",a[x]);
	}
} 
