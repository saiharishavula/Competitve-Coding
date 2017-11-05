#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,min=101,c=0,l=0;
	char s[101],p[10005];
	int a[105][27];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	for(j=0;j<26;j++)
	{
		a[i][j]=0;
	}
}
	for(i=1;i<=n;i++)
	{
		scanf("%s",&s);
		k=strlen(s);
		for(j=0;j<k;j++)
		{
			a[i][s[j]-'a']++;
		}
	}
	for(i=0;i<26;i++)
	{   min=110;
		for(j=1;j<=n;j++)
		{
			if(min>a[j][i])
			min=a[j][i];
		}
		while(min)
		{
			printf("%c",i+'a');
			l++;
			min--;
		}
	}
	if(l==0)
	printf("no such string");
}
