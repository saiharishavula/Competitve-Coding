#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
long long int n,a[100001],i,sum,c;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{   sum=0;
	c=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
		 scanf("%lld",&a[i]);
		 if(a[i]!=0&&a[i]!=1)
		 sum++;
		 if(a[i]==2)
		 c++;
		}
		c=c*(c-1)/2;
		sum=sum*(sum-1)/2;
		printf("%lld\n",sum-c);
	
	}
}
