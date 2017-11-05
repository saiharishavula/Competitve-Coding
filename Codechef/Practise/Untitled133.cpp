#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		if((a&1)==0||(b&1)==0)
		printf("Tuzik\n");
		else
		printf("Vanka\n");
	}
}
