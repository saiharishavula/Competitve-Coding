#include<stdio.h>
int main()
{
	long long int t;
	int x,y;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(x==0&&y==0)
		{
				printf("0\n");
				continue;
		}
		if(x==1&&y==1)
		{
			printf("1\n");
			continue;
		}
		if((x&1)&&(y&1))
		{
			if(y-x==-2||y-x==0)
			printf("%d\n",x+y-1);
			else
			printf("No Number\n");
		}
		else
		if((x&1)==0&&(y&1)==0)
		{
			if(y-x==-2||y-x==0)
			printf("%d\n",x+y);
			else
			printf("No Number\n");
		}
		
		else
		printf("No Number\n");
	
		
	}
}
