#include<stdio.h>
//using namespace std;
int main()
{
	long long int a,b,c=0,i;
	scanf("%lld",&a);
	for(i=0;i<a;i++)
	{
		scanf("%lld",&b);
		c=c^b;
	}
	//cout<<c<<endl;
	printf("%lld",c);
}
