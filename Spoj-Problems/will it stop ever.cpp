#include<stdio.h>
int main()
{
	long long int n;
	int flag=0;
	scanf("%lld",&n);
	while(1)
	{
		if(n==1)
		break;
		if(n&1)
		{
			flag=1;
			break;
		}
		n/=2;
	}
	if(flag)
	printf("NIE\n");
	else
	printf("TAK\n");
}
