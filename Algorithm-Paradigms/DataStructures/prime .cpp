#include<stdio.h>
int prime[78500]={0},t=1,temp[1000000]={0};
void sieve()
{
	int i,j;
	for(i=2;i<1000009;i++)
	{
		if(temp[i]==0)
		{
			prime[t]=i;
			t++;
			for(j=2;(i*j)<1000009;j++)
				temp[i*j]=1;
		}
	}
}
int main()
{
	int test,x,y,i,j,count;
	sieve();
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d",&x,&y);
		count=0;
		for(i=1;prime[i]<=y;i++)
		{
			if(prime[i]>=x)	count++;
		}
		printf("%d\n",count);
	}
}
