#include<cstdio>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
	int t,k,n,i;
	long long int a[20001],final;
	scanf("%d",&t);
	while(t--)
	{   final=INT_MAX;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		k--;
		if(k==0)
		printf("0\n");
		else
		{
		for(i=0;i<n-k;i++)
		{
			if(final>a[i+k]-a[i])
			final=a[i+k]-a[i];
		}
		printf("%lld\n",final);
		}
	
		
		
	}
}
