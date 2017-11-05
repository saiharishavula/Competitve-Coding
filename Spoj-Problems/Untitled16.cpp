#include<stdio.h>
#include<string.h>
int main()
{
	char s[2001];
	int k,i,len,c,f,ans;
	k=1;
	while(1)
	{   c=0;
	    f=0;
		scanf("%s",s);
		if(s[0]=='-')
		break;
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]=='{')
			c++;
			else
			{
				c--;
				if(c<0)
				{
					f++;
					c=0;
				}
			}
			
		}
		if(f%2==1)
		f=f/2+1;
		else
		f=f/2;
		if(c%2==1)
		c=c/2+1;
		else
		c=c/2;
		printf("%d. %d\n",k,f+c);
		k++;
		
	}
}
