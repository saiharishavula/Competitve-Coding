#include<stdio.h>
int main()
{
	int t,n,m,a[10001],b[10001],c[1001],i,p[10001],l;
	scanf("%d",&t);
	while(t--)
	{   l=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		c[i]=0;
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
		}
		for(i=m-1;i>=0;i--)
		{
			if(c[a[i]]==0&&c[b[i]]==0)
			{
				p[l++]=i;
				c[a[i]]++;
				c[b[i]]++;
			}
		}
		for(i=l-1;i>=0;i--)
		printf("%d ",p[i]);
		printf("\n");
	}
}
