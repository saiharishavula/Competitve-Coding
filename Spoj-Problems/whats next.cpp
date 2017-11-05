#include<stdio.h>
int main()
{
	int x,y,z;
	while(1)
	{
	
	scanf("%d%d%d",&x,&y,&z);
	if(x==0&&y==0&&z==0)
	break;
	if(y-x==z-y)
	{
		int k=z+(z-y);
		printf("AP ");
		printf("%d\n",k);
	}
	else
	{
		int k=z*(z/y);
		printf("GP ");
		printf("%d\n",k);
	}
}
}
