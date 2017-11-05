#include<stdio.h>
long int gcd(long int a,long int b)
{
	if(a==0)
	return b;
	else
	return gcd(b%a,a);
}
int main()
{
	int t;
	long int n,i,j;
	long long int gcd2,gcd1;
	long int p[100001];
	scanf("%d",&t);
	while(t--)
	{     scanf("%ld",&n);
	      gcd1=1;
	      for(i=0;i<n;i++)
	      {
	      	scanf("%ld",&p[i]);
	      }
		for(i=1; i<(1<<n); i++)
        {
            gcd2=0;
            for(j=0; j<n; j++)
            {
            	if(i&(1<<j))
            	{
            		gcd2=gcd(gcd2,p[j]);
            	}
            }
            gcd2=gcd2%1000000007;
            gcd1=(gcd1*gcd2)%1000000007;
        }
        printf("%lld\n",gcd1);
	}
}
