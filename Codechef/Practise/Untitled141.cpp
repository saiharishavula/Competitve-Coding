#include<stdio.h>
int i,j;
int a[100001]={0};
void first_go()
{
for(i=0;i<=100000;i++)
a[i]=0;
for(i=2;i<=100000;i++)
{
	if(a[i]==0)
	{
		for(j=i;j<=100000;j+=i)
		{
			a[j]++;
		}
	}
}
}
int main()
{
	first_go();
	int t,p,b,k,c;
	scanf("%d",&t);
	while(t--)
	{   c=0;
		scanf("%d%d%d",&p,&b,&k);
		for(i=p;i<=b;i++)
		{
			if(a[i]==k)
			c++;
		}
		printf("%d\n",c);
	}
	
}

