#include<stdio.h>
#include<limits.h>
long long int n,a[100001],i,j,max,c,final,min;
int main()
{
	while(1)
	{   max=0;
	    min=INT_MAX;
	    final=0;
	    long long int temp=0;
		scanf("%lld",&n);
		if(n==0)
		break;
	    for(i=0;i<n;i++)
	    {
	    	scanf("%lld",&a[i]);
	    	if(max<a[i])
	    	max=a[i];
	    	if(min>a[i])
	    	min=a[i];
	    }
	    for(i=min;i<=max;i++)
	    {   c=0;
	        temp=0;
	    	for(j=0;j<n;j++)
	    	{
	    		if(a[j]>=i)
	    		c++;
	    		else
	    		{
	    		c=0;
	    		}
	    		if(temp<c)
	    		temp=c;
	    	}
	    	if(final<temp*i)
	    	final=temp*i;
	    	
	    }
	    printf("%lld\n",final);
	}
	
}
