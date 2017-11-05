#include<iostream>
using namespace std;
long long int gcd(long long int x,long long int y)
{
	if(x==0)
	return y;
	else
	return gcd(y%x,x);
}
int main()
{
	int t;
	long long int n,m,c1,c2,k1,k2;
	//double f;
	scanf("%d",&t);
	while(t--)
	{   c1=0;
	    c2=0;
	    k1=0;
	    k2=0;
		scanf("%lld%lld",&n,&m);
		c1+=n/2;
		c1+=n%2;
		k1+=m/2;
	//	f=(c*k)/(n*m);
		c2+=m/2;
		c2+=m%2;
		k2+=n/2;
		//f+=(c*k)/(n*m);
		//f/=2;
		long long int f=gcd(c1*k1+c2*k2,n*m);
		if(f==1)
		cout<<c1*k1+c2*k2<<"/"<<n*m<<endl;
		else
		cout<<(c1*k1+c2*k2)/f<<"/"<<(n*m)/f<<endl;
		
		
		
		
		
	}
}
