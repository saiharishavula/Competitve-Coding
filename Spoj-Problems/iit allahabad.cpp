#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	unsigned long long int t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		k=(3*n)%11;
		printf("%lld\n",k);
	}
}
