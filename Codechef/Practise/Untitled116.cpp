//#include<iostream>
#include<stdio.h>
#include<math.h>
#define M 1000000007
//using namespace std;
int main()
{
	int t;
	long int n;
	long long int a[100002],b[100002],i,sum,j,temp1,temp2,temp3,p,l;
//	long double p;
	scanf("%d",&t);
	while(t--)
	{  sum=0;
      scanf("%ld",&n);
      p=pow(2,n);
      p=p%M;
      
      scanf("%lld",&a[0]);
      b[0]=a[0];
      for(i=1;i<=n;i++)
      {
      	scanf("%lld",&a[i]);
      	b[i]=(a[i]+b[i-1])%M;
      }
      for(i=1;i<=n;i++)
      {
      	temp1=a[i]*b[i-1];
      	temp1=temp1%M;
      	temp2=temp1*p;
      	sum+=temp2%M;
      }
      printf("%lld\n",sum%M);
	}
	
	
}
