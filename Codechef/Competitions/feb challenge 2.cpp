#include<iostream>
#include<cstdio>
using namespace std;
#define M 1000000007
long long int a[100005];
long long int b[100005];
#define Max 100001


long long int power(long long int x,long long int y)
{
    if (y == 0)
        return 1;
    long long int p = power(x, y/2) % M;
    p = (p * p) % M;
 
    return (y%2 == 0)? p : (x * p) % M;
} 
int main()
{
//	fact();
	long long int t,x,n,i;
	long long int m,k,temp,sum;
	scanf("%lld",&t);
	while(t--)
	{  sum=0;
		scanf("%lld%lld%lld",&n,&x,&m);
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			a[i]=a[i]%M;
		}
		m=m%M;
		k=1;
		sum=(sum+a[x])%M;
		for(i=1;i<x;i++)  
		{
			k=(k*m)%M;
			k=(k*power(i,M-2))%M;
			//k=k/b[i];
			sum=(sum+(k*a[x-i])%M)%M;
			m++;
		}
		printf("%lld\n",sum);   
		
	}
} 
