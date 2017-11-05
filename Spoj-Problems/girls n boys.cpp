#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(1)
	{
		scanf("%d%d",&a,&b);
		if(a==-1&&b==-1)
		break;
	   if(a>b)
	   {
	   	printf("%.2f\n",ceil( (double)a/(b+1)) );
	   }
	   else
	   printf("%.lf\n",ceil( (double)b/(a+1)) );

		
	}
}
