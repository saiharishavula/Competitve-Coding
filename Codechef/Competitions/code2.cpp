#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);	
		int c=1;
		while(c<=n)
		{
			c*=2;
		}
		c/=2;
		if(n%c==0)
		printf("%d\n",c);
		else
		printf("%d\n",2*(n%c));
		
		
	}
	
}
