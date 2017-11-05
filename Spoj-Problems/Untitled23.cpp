#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];
	int i,k,p;
	while(scanf("%s",a)!=EOF)
	{  k=strlen(a);
	 if(k==1&&a[0]==49)
	    printf("1\n");
	    else        
		{   int c=0,f;
			for(i=k-1;i>=0;i--)
			{
				f=a[i]-'0';
				f=2*f+c;
				c=f/10;
				f=f%10;
				a[i]=f+'0';
			}
	    	f=a[k-1]-'0';
	    	p=k-2;
	    	if(f<=1)
	    	{
	    	 if(f==0)
	    	 {
	    	  a[k-1]=8+'0';
			  while(a[p]=='0')
			  {
			  	a[p]='9';
			  	p--;
			  }
			  if(p!=-1)
			  {
			  	f=a[p]-'0';
			  	f--;
			  	a[p]=f+'0';
			  }
			  else
			  c--;
			  	
	    	 }
	    	 else
	    	 if(f==1)
	    	 {
	    	 	a[k-1]=7+'0';
			  while(a[p]=='0')
			  {
			  	a[p]='9';
			  	p--;
			  }
			  if(p!=-1)
			  {
			  	f=a[p]-'0';
			  	f--;
			  	a[p]=f+'0';
			  }
			  else
			  c--;
	    	 }
			  
	    	}
	    	else
	    	{
	    	f-=2;
		    a[k-1]=f+'0';	
	    	}
			
			if(c)
			printf("%d%s\n",c,a);
			else
			printf("%s\n",a);
		}
	}
}
