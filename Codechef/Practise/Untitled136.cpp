#include<stdio.h>
int main()
{
	int t;
	long int n,a[100001],i,c,b[100001];
	scanf("%d",&t);
	while(t--)
	{   c=0;
		scanf("%ld",&n);
		for(i=1;i<=100000;i++)
		b[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
			b[a[i]]++;
		}
		for(i=1;i<=100000;i++)
		{
			if(b[i]!=0)
			c++;
		}
		printf("%ld\n",c);
	}
}
