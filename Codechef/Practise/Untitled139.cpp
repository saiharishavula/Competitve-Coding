#include<stdio.h>
int main()
{
	int t,n,k,i,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		temp=n/2;
		if(k==1)
		{
			printf("1\n");
			continue;	
		}
	
		if(k>temp)
		printf("-1\n");
		else
		for(i=2;i<=2*k;i+=2)
		printf("%d ",i);
		printf("\n");
		
	}
}
