#include<stdio.h>
int main()
{
	long int n;
	int k;
	scanf("%ld",&n);
	k=n%10;
	
	if(k)
	{
		printf("1\n");
		printf("%d",k);
		
	}
	else
	printf("2");
}
