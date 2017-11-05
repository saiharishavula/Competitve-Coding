#include<stdio.h>
int main()
{
	long long int a,b,i,sum,f,final,temp;
	int t;
	scanf("%d",&t);
	while(t--)
	{   final=0;
		scanf("%lld%lld",&a,&b);
		for(i=a;i<=b;i++)
		{   sum=0;
		    //printf("k");
		    temp=i;
			while(temp)
			{   
				f=temp%10;
				if(f%2==0)
				sum+=2*f;
				else
				sum+=f;
				temp=temp/10;
			}
			final+=sum%10;
		}
		printf("%lld\n",final);
		
		
	}
}
