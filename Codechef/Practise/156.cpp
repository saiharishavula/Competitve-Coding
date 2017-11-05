#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
long long int a[100005];
long int c[100005];
int main()
{
	int t,n,i,final;
	scanf("%d",&t);
	while(t--)
	{

		final=1;

		scanf("%d",&n);
	//	int b[n+1]={0};
	//	memset(c,1,n+1);
	for(i=0;i<n;i++)
	c[i]=1;
		scanf("%lld",&a[0]);
		for(i=1;i<n;i++)
		{
			scanf("%lld",&a[i]);


		}
			for(i=n-2;i>=0;i--)
		{

			if(a[i]*a[i+1]<0)
			{
				c[i]=c[i+1]+1;
			}

		}
		for(i=0;i<n;i++)
		{
			printf("%ld ",c[i]);

		}
		printf("\n");



	}
}
