#include<stdio.h>
#include<string.h>
char a[100001];
int main()
{
	int t,p[27];
	long int c;
	scanf("%d",&t);
	while(t--)
	{   for(int i=0;i<26;i++)
	    p[i]=0;
	    c=0;
		scanf("%s",a);
		int k=strlen(a);
		for(int i=0;i<k;i++)
		{
			p[a[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(p[i])
			c++;		}
		printf("%d\n",c);
	}
}
