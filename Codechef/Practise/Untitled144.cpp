#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,m,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&m,&k);
		if(abs(n-m)<=k)
		printf("0\n");
		else
		printf("%d\n",abs(n-m)-k);
		
	}
}
