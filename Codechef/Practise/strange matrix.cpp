#include<stdio.h>
long long int gcd(long long int x,long long int y)
{
	if(x==0)
	return y;
	else
	return gcd(y%x,x);
}
int main()
{
	int t;
	long long int n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		printf("%lld",gcd(n-1,m-1)+1);
		
	}
}
