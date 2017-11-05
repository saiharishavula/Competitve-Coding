#include<bits/stdc++.h>
using namespace std;
long long int a[1001];
int main()
{
	long long int k,final;
	int t,n,i,j,c;
	scanf("%d",&t);
	while(t--)
	{   c=0;
    	final=INT_MAX;
		scanf("%d%lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(abs(a[i]+a[j]-k)<=final)
				{
					if(final==abs(a[i]+a[j]-k))
					c++;
					else
					{
						c=1;
						final=abs(a[i]+a[j]-k);
					}
				}
			}
		}
		printf("%lld %d\n",final,c);
		
	} 
}
