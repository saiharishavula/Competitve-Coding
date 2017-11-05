#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int t;
	double a,b,c,d;
	double s;
	scanf("%d",&t);
	while(t--)
	{
		//scanf("%f%f%f%f",&a,&b,&c,&d);
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		s=(double)sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%0.2lf\n",s);

	}
}

