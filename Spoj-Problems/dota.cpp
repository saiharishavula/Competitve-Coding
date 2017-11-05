#include<stdio.h>
//int a[505];
int main()
{
	int t,n,m,d,i,h,c;
	scanf("%d",&t);
	while(t--)
	{c=0;
		scanf("%d%d%d",&n,&m,&d);
		for(i=0;i<n;i++)
		{
			scanf("%d",&h);
			while(h>d)
			{
			    c++;
				h-=d;
			}
			
		}
		if(c>=m)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	
}

