#include<stdio.h>
#include<math.h>
int main()
{
	long int n,c=0,i,j;
	scanf("%ld",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=sqrt(i);j++)
		{
			if(i%j==0)
			c++;
		}
	}
	printf("%ld",c);
	
	
}
