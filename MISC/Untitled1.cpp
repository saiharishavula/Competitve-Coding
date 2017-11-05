#include<stdio.h>
int main()
{int t;
long int a,b,c,d;
scanf("%d",&t);
while(t--)
{scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
//double k=a/(a+b);
printf("%0.3f\n",(double)a/(a+b));
}
}
