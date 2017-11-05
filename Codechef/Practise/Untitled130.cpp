#include<stdio.h>
long long int a[2000001],i,n,m;
void fib(long long int p,long int q)
{  
a[0]=0;
a[1]=1;
for(i=2;i<=2*p;i++)
a[i]=(a[i-1]+a[i-2])%q;
}
int main()
{
	int t;
	scanf("%d",&t);
	//fib();
	while(t--)
	{   
		scanf("%lld%lld",&n,&m);
		fib(n,m);
		a[2*n-1]=a[2*n-1]%m;
		a[2*n]=a[2*n]%m;
		printf("%lld/",a[2*n-1]);
		printf("%lld\n",a[2*n]);;
		
	}
}
