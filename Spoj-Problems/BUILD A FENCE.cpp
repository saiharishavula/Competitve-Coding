#include<stdio.h>
#define PI 3.141592654
/* for largest area it should be a circle...how???? intution  !!!!*/
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		printf("%0.2f\n",(double)n*n/(2*PI));
	}
	
}
