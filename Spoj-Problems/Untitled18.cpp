#include<stdio.h>
int main()
{
	int n,a[10001],i;
	long long int sum,c;
	while(1)
	{   sum=0;
	    c=0;
		scanf("%d",&n);
		if(n==-1)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%n)
		printf("-1\n");
		else
		{
			int k=sum/n;
			for(i=0;i<n;i++)
			{
				if(a[i]<k)
				c+=k-a[i];
			}
			printf("%lld\n",c);
		}
		
		
	}
}
