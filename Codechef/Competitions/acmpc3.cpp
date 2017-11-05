#include<stdio.h>
//using namespace std;
#define M 1000000007
long long int a[2][6];
int main()
{
	int k,w,p=1;
	long long int i,j,final;
	long long int n,m;
	scanf("%lld%lld%lld",&n,&k,&m);
	if(n==1||k==1)
	printf("%lld",m);
	else
	{
	
	for(i=0;i<k;i++)
	a[0][i]=m;
	a[1][0]=m;
	//int p=1;
	for(i=1;i<n;i++)
	{   
		for(j=1;j<k;j++)
		{
			if(i&1)
			{
				a[1][j]=((a[1][j-1]+a[0][j-1])%M+a[0][j])%M;
			//	final=a[1][j];
			}
			
			else
			{
				a[0][j]=((a[0][j-1]+a[1][j-1])%M+a[1][j])%M;
			//	final=a[0][j];
			}
			
			
	}
		
	}
	if(n&1)
	printf("%lld",a[0][k-1]);
	else
	printf("%lld",a[1][k-1]);
//	printf("%lld",final);
}
	
	
}
