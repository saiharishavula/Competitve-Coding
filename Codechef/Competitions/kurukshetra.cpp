#include<iostream>
#include<cstdio>
using namespace std;
 
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,c,sm,ans=0;
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a==0)
		{
			ans=ans+b/3+c/3;
			printf("%lld\n",ans);
			continue;
		}
		if(b==0)
		{
			
			ans+=a/3+c/3;
			printf("%lld\n",ans);
			continue;
		}
		if(c==0)
		{
			ans+=a/3+b/3;
			printf("%lld\n",ans);
			continue;
		}
		ans=ans+a/3+b/3+c/3;
		a=a%3;
		b=b%3;
		c=c%3;
		sm=min(a,b);
		sm=min(sm,c);
		ans+=sm;
		if((a==2&&b==2&&c==0)||(a==0&&b==2&&c==2)||(b==0&&a==2&&c==2))
		ans++;
		printf("%lld\n",ans);
		
	}
	return 0;
} 
