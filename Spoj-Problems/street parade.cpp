#include<stdio.h>
int a[1005];
 
int main()
{
	
	int n,i,f,j,p;
	while(1)
	{
		f=0;
		p=1;
		int b[1005];
		b[0]=100000;
	
	scanf("%d",&n);
	if(n==0)
	break;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k=1;
	for(i=1;i<=n;i++)
	{
		if(b[p-1]==i)
		{
			p--;
			continue;
		}
		for(j=k;j<=n;j++)
		{
				k++;
			if(a[j]!=i)
			{
				if(a[j]>b[p-1])
				f=1;
				else
				b[p++]=a[j];
				
			}
			else
			break;
			if(f==1)
			break;
		
		}
		if(f==1)
		break;
		
	}
	if(f==1)
	printf("no\n");
	else
	printf("yes\n");
	
	
}
	
} 
