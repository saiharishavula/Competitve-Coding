#include<stdio.h>
#define M 1000000007
int main()
{
	int t;
	long int n,m;
	scanf("%d",&t);
	unsigned long long int final,sum,temp;
	while(t--)
	{   final=0;
		scanf("%ld%ld",&n,&m);
		if(m==0)
		{
			printf("0\n");
			continue;
		}
		sum=0;
		long long int a=0,b=1;
		
		for(int i=1;i<=m;i++)
		{
			if(i==n)
			sum=final;
			final+=b;
			temp=a+b;
			a=b;
			b=temp;
			
			   
		}
		printf("%d\n",final-sum);
	}
}
