#include<iostream>
#include<cstdio>
using namespace std;
#include<algorithm>
int main()
{
	int t,n,sum,i;
	scanf("%d",&t);
	while(t--)
	{   sum=0;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
			for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		//	sum+=a[i]
		}
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++)
		{
			sum+=a[i]*b[i];
		}
		printf("%d\n",sum);
	}
}
