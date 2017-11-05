#include<stdio.h>
int main()
{
	int t,a,b,c,sum,final,k,temp,p;
	scanf("%d",&t);
	while(t--)
	{   //final=0;
	    k=0;
	    p=0;
		scanf("%d%d%d",&a,&b,&c);
		final=0;
		int temp1=10000;
		while(temp1--)
		{
			sum=a*100+b;
			if(final<sum)
			{
				final=sum;
				p=k;
			}
			if(sum<c)
			break;
			if(b<c)
			{
				a--;
				b+=100;
			}
			b-=c;
			temp=a;
			a=b;
			b=temp;
			k++;
			
			
		}
		printf("%d\n",p);
		
	}
	
}
