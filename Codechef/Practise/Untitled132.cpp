#include<stdio.h>
#include<string.h>
char a[1001],b[1001];
int p[27],q[27];
int main()
{
	int t,flag;
	long int c;
	scanf("%d",&t);
	while(t--)
	{   for(int i=0;i<26;i++)
	    {
	    	p[i]=0;
	    	q[i]=0;
	    }
	    flag=0;
		scanf("%s%s",a,b);
		int k=strlen(a);
		int l=strlen(b);
		for(int i=0;i<k;i++)
		{
			p[a[i]-'a']++;
		}
		for(int i=0;i<l;i++)
		{
			q[b[i]-'a']++;
		}
		int g=0;
		for(int i=0;i<26;i++)
		{   if((p[i]!=0&&q[i]==0)||(p[i]==0&&q[i]!=0))
		    g=1;
		
			if(p[i]!=q[i])
			flag=1;
		
					}
		if(flag!=g)
		printf("NO\n");
		else
		printf("YES\n");
	}
}
