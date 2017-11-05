#include<stdio.h>
long int a[10005];
int main()
{
	int k,t,e;
	long int l;
	long long int sum,tsum;
	scanf("%d",&t);
	while(t--)
	{   sum=0;
		scanf("%d%ld%d",&k,&l,&e);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
	//	a[k]=e;
		sum+=e;
	//	sort(a,a+k+1);
		long int p=l%(sum);
		if(p==0)
			printf("YES\n");
			else
			printf("NO\n");
		
		
		
	}
}
