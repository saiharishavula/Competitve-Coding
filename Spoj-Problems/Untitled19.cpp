#include<stdio.h>
unsigned long long int t,n,i,sum;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{   sum=0;
		printf("\n");
		scanf("%lld",&n);
		unsigned long long int a[n];
		for(i=0;i<n;i++)
		{  // printf("%lld\n",n);
			scanf("%lld",&a[i]);
			sum+=a[i]%n;
		}
		if(sum%n==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
