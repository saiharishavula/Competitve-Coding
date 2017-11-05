#include<stdio.h>
int main()
{
	long int n,a[100001],b[100001],c=0,final=0;
	scanf("%ld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d",&b[i]);
		
	}
	for(int i=1;i<=n;i++)
	{
		int t=a[i];
		a[i]=a[b[i]];
		a[b[i]]=t;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		c++;
		else
		{
			c=0;
		}
		if(final<c)
		final=c;
		
	}
	printf("%ld",final);
	
	
}
