#include<stdio.h>
#include<math.h>
int main()
{
	long int t,i,n,c;
	scanf("%ld",&t);
	while(t--)
	{   c=0;
		scanf("%ld",&n);
		int k=sqrt(n);
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				c+=i;	
				c+=n/i;
			}
		
		}
		  
		if(k*k==n)
		{
			printf("%ld\n",c-k+1);
		}
		else
		printf("%ld\n",c+1);
		
	}
}
