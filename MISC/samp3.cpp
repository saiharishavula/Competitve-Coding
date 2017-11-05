#include<stdio.h>
int main()
{
	long long int n;
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==0)
		{
			printf("3\n");
			continue;
		}
		if(n==1)
		{
		printf("1\n");
		continue;	
		}
		if(n%4==0)
		{
		printf("%lld\n",n);
		continue;	
		}
		if(n%4==3)
		{
			printf("%lld\n",n-1);
			continue;
		}
		printf("-1\n");
		
	}
}
