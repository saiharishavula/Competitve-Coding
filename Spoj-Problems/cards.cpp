#include<stdio.h>
#define M 1000007

int main()
{
	int t;
//	solve();
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		n=n%M;
		printf("%lld\n",(2*n+n*3*(n-1)/2)%M);
	}
}
