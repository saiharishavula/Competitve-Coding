#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long int t,n,i,temp,p,sum;
	scanf("%lld",&t);
	long long int MAX=50001;
	long long int b[50005];
	b[0]=0;
	while(t--)
	{
	   p=1;
	   sum=0;
		long long int a[50005]={0};
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
		scanf("%lld",&temp);
		a[temp]++;
	}
	
	for(i=1;i<=MAX;i++)
	{
		if(a[i]!=0)
		{
		b[p]=b[p-1]+a[i];
		sum+=b[p]*a[i];
		p++;
	    }
	}
	printf("%lld\n",sum);
		
		
		
	}
}
