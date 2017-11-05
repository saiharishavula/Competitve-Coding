#include<stdio.h>
/* josephous problem(Nannaku prematho :) */
int josephous(int n,int k)
{
	if(n==1)
	return 1;
	else
	return (josephous(n-1,k)+k-1)%n+1;
}
int main()
{
	int t,n,k=2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",josephous(n,k));

	}
}
