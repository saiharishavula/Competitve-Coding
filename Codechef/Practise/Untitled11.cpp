#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,s;
	int i,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&s);
		if(s==1)
		{
		    printf("2\n");
			continue;	
		}
		else
		{
			  if((s&(s+1))==0)
		      printf("%d\n",s>>1);
		      else
		      printf("-1\n");
		}
		
	}
}
