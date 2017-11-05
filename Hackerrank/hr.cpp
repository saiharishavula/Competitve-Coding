#include<stdio.h>
#include<math.h>
#include<limits.h>
long long int x[1000001],y[1000001];
double sqrt(long double);
int main()
{
	long long int n,i;
	double minx=INT_MAX,miny=INT_MAX,maxx=0,maxy=0;
	double long a[7];
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&x[i],&y[i]);
		if(maxx<x[i])
		maxx=x[i];
		if(minx>x[i])
		minx=x[i];
		if(maxy<y[i])
		maxy=y[i];
		if(miny>y[i])
		miny=y[i];
	}
	a[0]=maxx-minx;
	a[1]=maxy-miny;
	a[2]=sqrt(miny*miny+maxx*maxx);
	a[3]=sqrt(miny*miny+minx*minx);
	a[4]=sqrt(maxy*maxy+maxx*maxx);
	a[5]=sqrt(maxy*maxy+minx*minx);
	double max=0.0;
	for(int i=0;i<6;i++)
	{
	if(max<a[i])
	max=a[i];	
	}
	printf("%.25f",max);
	
}
