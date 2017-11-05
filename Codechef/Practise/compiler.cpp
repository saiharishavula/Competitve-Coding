#include<stdio.h>
#include<string.h>
int max1(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int t;
	long int i,final,c;
	char s[1000001];
	scanf("%d",&t);
	while(t--)
	{   c=0;
		final=0;
		scanf("%s",&s);
		int k=strlen(s);
		for(i=0;i<k;i++)
		{
			if(s[i]=='<')
			c++;
			else
			{
				c--;
				if(c==0)
				final=i+1;
				if(c<0)
				break;
			}
		}
		printf("%lld\n",final);
		
	}
}
