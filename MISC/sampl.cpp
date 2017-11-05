#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MOD 1000000007
 

 
 
 
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long n,i;
	    scanf("%lld",&n);
	    long long int ans=1;
		for(i=0;i<n;i++)
		ans=(ans*2)%MOD;
	    
	    printf("%lld\n",ans-1);
	}
	return 0;
}
