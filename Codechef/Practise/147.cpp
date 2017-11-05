#include<stdio.h>
int main()
{
   long long int t,i,c,k;
   c=0;
   scanf("%lld",&t);
   k=t/2+1;
   for(i=0;i<=t;i++)
   {
   	if(i&(t-i))
   	c++;
   }
   c=t+1-c;
   printf("%lld",c);
   


	
	
}
