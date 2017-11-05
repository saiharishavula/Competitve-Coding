#include<cstdio>
#include<cmath>
int min(int x,int y,int z)
{
	if(x<=y&&x=<z)
	return x;
	if(y<=z)
	return y;
	else
	return z;
}
int main()
{
	int a,b,c,d,e,f,t1,t2,t3;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	t1=a+b+c+d;
	t2=a+b+f;
	t3=a+d+e;
	if(t1>=0&&t2>=0&&t3>=0)
	printf("0");
	else
	printf("%d",abs(min(t1,t2,t3)));
	
}
