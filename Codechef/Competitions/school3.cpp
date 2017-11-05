#include<iostream>
#include<cstdio>
//#define P 3.14159265359
using namespace std;
int main()
{
	int t;
	cin>>t;
	double P=3.14159265359;
	double r1,r2,h1,h2,v1,v2;
	while(t--)
	{
		cin>>r1>>h1>>r2>>h2;
		v1=((P*r1*r1*h1)+(2*P*r1*r1*r1))/3;
		v2=P*r2*r2*h2;
	//	cout<<v1<<" "<<v2<<endl;
	printf("%0.7f %0.7f\n",v1,v2);
		
	}
}

