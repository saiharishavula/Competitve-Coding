#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n;
	    scanf("%lld",&n);
	    long long ans;
	    ans=2*n*(n-1)*(n-1) + n*(n-1)*(n-2) + 2*n*(n-1)*(n-2)*(n-2);
	    printf("%lld\n",ans);
	    
	}
	return 0;
}
 
