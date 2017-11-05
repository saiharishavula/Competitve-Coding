#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int a[100001],p[100001],b[100001];
int main()
{
long long int n,q,k,i,j,h,c=0,t;
	scanf("%lld",&n);
	//sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		
	}
	sort(a,a+n);
//	long long int h=1;
	b[0]=0;
	h=1;
	for(i=0;i<n;i++)
	{
		b[h]=a[i]+b[h-1];
		h++;
	}

	scanf("%lld",&q);
	for(i=0;i<q;i++)
	{  
		scanf("%lld",&k);
		c=0;
		c=n/(k+1);
		if(c*(k+1)<n)
		c++;
		printf("%lld\n",b[c]);
		
	}

}
