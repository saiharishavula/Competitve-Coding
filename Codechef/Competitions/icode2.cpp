#include<stdio.h>
int a[1000005],i,j,sum;
long int gcd(long int x,long int y)
{
	if(x==0)
	return y;
	else
	return gcd(y%x,x);
}
void solve()
{       a[0]=0;
//for(int k=1;k<=10;k++)
		for(i=1;i<=10;i++)
		{  sum=0;
			for(j=i+1;j<=10;j++)
			sum+=gcd(i,j);
		    a[i]=a[i-1]+sum;
		}
}
int main()
{
	solve();  
	long long int n;
		scanf("%lld",&n);
	   printf("%lld\n",a[n]);
	
}
