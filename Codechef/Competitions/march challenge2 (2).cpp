#include<iostream>
#include<climits>
using namespace std;
long long a[100005];
long long b[100005];
int main()
{
	long long t;
	long long n,i,i1;
	long long k,max,temp,sum1,sum2,diff;
	cin>>t;
	while(t--)
	{
		i1=-1;
		sum1=0;
		max=INT_MIN;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		    if(a[i]*b[i]<0)
		    {
		    	if(a[i]>0)
		    	{
		    		temp=a[i];
		    		temp-=k;
		    		diff=(temp*b[i])-(a[i]*b[i]);
		    		if(max<=diff)
		    	     {
		    	     	sum2=temp*b[i];
		    	     	max=diff;
		    	     	i1=i;
		    	     }
		    	}
		    	else
		    	{  
		    		temp=a[i];
		    		temp+=k;
		    		diff=(temp*b[i])-(a[i]*b[i]);
		    		if(max<=diff)
		    	     {
		    	     	sum2=temp*b[i];
		    	     	max=diff;
		    	     	i1=i;
		    	     }
		    		
		    	}
		    }
		    if(a[i]*b[i]>0)
		    {
		    	if(a[i]>0)
		    	{
		    		temp=a[i];
		    		temp+=k;
		    	diff=(temp*b[i])-(a[i]*b[i]);
		    		if(max<=diff)
		    	     {
		    	     	sum2=temp*b[i];
		    	     	max=diff;
		    	     	i1=i;
		    	     }
		    	}
		    	else
		    	{
		    		temp=a[i];
		    		temp-=k;
		    		diff=(temp*b[i])-(a[i]*b[i]);
		    		if(max<=diff)
		    	     {sum2=temp*b[i];
		    	     	
		    	     	max=diff;
		    	     	i1=i;
		    	     }
		    	}
		    }
		    if(a[i]*b[i]==0)
		    {
		    	if(b[i]!=0)
		    	{
		    		if(b[i]<0)
		    		{
		    			temp=a[i];
		    			temp-=k;
		    		diff=(temp*b[i])-(a[i]*b[i]);
		    		if(max<=diff)
		    	     {
		    	     	sum2=temp*b[i];
		    	     	max=diff;
		    	     	i1=i;
		    	     }
		    		}
		    		else
		    		{
		    			temp=a[i];
		    			temp+=k;
		    		diff=(temp*b[i])-(a[i]*b[i]);
		    		if(max<=diff)
		    	     {
		    	     	sum2=temp*b[i];
		    	     	max=diff;
		    	     	i1=i;
		    	     }
		    		}
		    	}
		    
		    }
		    
		}
		for(i=0;i<n;i++)
		{
			if(i==i1)
			{
				sum1+=sum2;
			}
			else
			{
				sum1+=(a[i]*b[i]);
			}
		}
		cout<<sum1<<endl;
		
		
	}
} 
