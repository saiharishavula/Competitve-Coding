#include<stdio.h>
#include<math.h>
bool check_for_lucky(int p)
{
	while(p)
	{
		int temp=p%10;
		if(temp==4||temp==7)
		return true;
		p/=10;
	}
	return false;
}
int main()
{
	int t;
	long long int n,c;
	scanf("%d",&t);
	while(t--)
	{   c=0;
		scanf("%lld",&n);
		int k=sqrt(n);
		for(int i=2;i<=k;i++)
		{
			if((n%i)==0)
			{
				if(check_for_lucky(i))
				c++;
				if(i!=n/i&&check_for_lucky(n/i))
				c++;
			}
		}
			if(check_for_lucky(n))
			c++;
		printf("%d\n",c);
	}
}
