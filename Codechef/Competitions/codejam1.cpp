#include<stdio.h>
#include<algorithm>
long long int a[1001];
int main()
{
	int t,n,i,c;
	scanf("%d",&t);
	while(t--)
	{ c=0;
		scanf("%d",&n);
		scanf("%lld",&a[0]);
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]>a[0])
			c++;
		}
		printf("%d\n",c);
		
		
		
		
	}
}
