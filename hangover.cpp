#include<stdio.h>
int main()
{
	float k,sum;
	while(1)
	{   sum=0.00;
		scanf("%f",&k);
		if(k==0.00)
		break;
		int i=2;
		//printf("%f\n",k);
		while(1)
		{
			sum+=1.0/(i);
			if(sum>k)
			{
				//printf("k");
			//	printf("%f\n",sum);
				i-=1;
				break;
			}
			i++;
		}
		printf("%d ",i);
		printf("card(s)\n");
		
	}
}
