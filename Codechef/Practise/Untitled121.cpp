#include<stdio.h>
int main()
{
	int t;
	long long int k,n,a[100001],b[100001],i,sum;
	scanf("%d",&t);
	while(t--)
	{   sum=0;
		scanf("%lld%lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			a[i]=k/a[i];
			
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
			b[i]*=a[i];
		}
		for(i=0;i<n;i++)
		{
			if(sum<b[i])
			sum=b[i];
		}
		printf("%lld\n",sum);
	}
}
