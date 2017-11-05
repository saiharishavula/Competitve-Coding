#include<stdio.h>
#define M 1000000007
long long int a[100001];
long long int b[100001];
int main()
{
	int t,x,n,i,j;
	long long int m,sum;
	scanf("%d",&t);
	while(t--)
	{   sum=0;
		scanf("%d%d%lld",&n,&x,&m);
		m=m%M;
		int k=x;
		k--;
	//	b[0]=0;
		for(i=1;i<=n;i++)
		{
				scanf("%lld",&a[i]);
				a[i]=a[i]%M;
				b[i]=(m*a[i])%M;
			//	printf("%lld\n",b[i]);
				
		}
		for(i=1;i<x;i++)
		{
			b[i]=(b[i]*k)%M;
		//	printf("%lld\n",b[i]);
			k--;
		}
            for(i=1;i<x;i++)
			sum=(sum+b[i])%M;
			sum=(sum+a[x])%M;
			printf("%lld\n",sum);
	}
	
}
