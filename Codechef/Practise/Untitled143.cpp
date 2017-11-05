#include<stdio.h>
int i,j;
int a[100001]={0};
int b[100001][6];
void first_go()
{
for(i=0;i<=100000;i++)
a[i]=0;
for(i=0;i<=100000;i++)
for(j=1;j<=6;j++)
b[i][j]=0;

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
for(i=2;i<=100000;i++)
{
for(j=1;j<=6;j++)
b[i][j]=b[i-1][j]+(a[i]==j?1:0);
}
}
int main()
{
	first_go();
	int t,p,q,k,c;
	scanf("%d",&t);
	while(t--)
	{   c=0;
		scanf("%d%d%d",&p,&q,&k);
		printf("%d\n",b[q][k]-b[p-1][k]);
	}
	
}
 
