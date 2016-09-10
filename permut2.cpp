#include<stdio.h>
int a[100001];
int b[100001];
int main()
{
	int n,i;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]=i;
		}
		int flag=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]!=b[i])
			flag=1;
		}
		if(flag)
		printf("not ambiguous\n");
		else
		printf("ambiguous\n");
		
	}
	
	
}
