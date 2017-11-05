#include<stdio.h>
int main()
{ int n,a,b,c=0,final=100,x[51]={0},y[1000],count;
	scanf("%d",&n);
	final=100;
    if(n%2==0)
	{
		printf("4\n");
		printf("%d %d %d %d",n/2,n/2,n/2,n/2);
	}
/*	else
	if(n==7)
	{
		printf("9\n");
		printf("1 1 1 2 2 2 3 3 4");
	}	*/  
	else{
	
		for(int i=n-1;i>=n/2;i--)
		{
			a=i;
			b=n-i;
			c=0;
			for(int l=0;l<51;l++)
			x[l]=0;
			x[a]++;
				
			x[b]++;
			//count=0;
		
			while(1)
			{   
			    if(a<b)
			    {
			    	int temp=a;
			    	a=b;
			    	b=temp;
			    }
				if(a%b==0)
				{
					c+=a/b;
					x[b]+=a/b*2;
					break;
				}
				else
				{
					c+=a/b;
					x[b]+=a/b*2;
					a=a%b;
				}
			}
			if(final>c)
			{
				final=c;
				count=0;
				for(int k=1;k<=50;k++)
				{      // printf("%d-%d ",k,x[k]);
					    while(x[k])
						{
						y[count++]=k;
						x[k]--;	
						}
						  
					
				}
					
			}
		
		}
		printf("%d\n",2*final+2);
	//	printf("%d\n",count);
		for(int i=0;i<count;i++)
		printf("%d ",y[i]);
}

}
