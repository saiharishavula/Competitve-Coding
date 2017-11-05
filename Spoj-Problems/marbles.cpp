#include<stdio.h>
#define M 1000000007

long long int com(long int n,long int k)
{   if(k>(n-k))
   k=(n-k);
	long long int res=1;
	for(long int i=0;i<k;i++)
	{
		res=(res*(n-i)/(i+1));
		
	}
	return res;
}
long int n,k;
int main()
{   
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld%ld",&n,&k);
	//	if((k)>(n+1)/2)
	//	k=(n+1)/2;
		long long int a=com(n-1,k-1);
	
	//	long long int c=fact(k-1);
	//	long long int final=a/c;
		printf("%lld\n",a);
		
		
	}
}
