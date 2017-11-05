#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	char a[2016];
	while(t--)
	{
		scanf("%s",a);
		int n=strlen(a);
		i=n-1;
		while(i>=3)
		{
			if((a[i]=='F'||a[i]=='?')&&(a[i-1]=='E'||a[i-1]=='?')&&(a[i-2]=='H'||a[i-2]=='?')&&(a[i-3]=='C'||a[i-3]=='?'))
			{
				a[i]='F';
				a[i-1]='E';
				a[i-2]='H';
				a[i-3]='C';
				i-=4;
			}
			else
			{
			if(a[i]=='?')
			a[i]='A';	
			i--;
			}
			
		}
		i=2;
		while(i>=0)
		{
			if(a[i]=='?')
			a[i]='A';
			i--;
		}
		printf("%s\n",a);
		
	}
}
