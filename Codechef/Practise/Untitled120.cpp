#include<stdio.h>
//using namespace std;
int main()
{
	float m1,sec1,d,a,b;
	int i,t;
	float ans;
	char s1[6],s2[6];
	scanf("%d",&t);
	while(t--)
	{   m1=0;
	    sec1=0;
		scanf("%s%s",s1,s2);
		int k=1000;
		m1+=(s1[0]-'0')*10;
	    m1+=(s1[1]-'0');
		sec1+=(s1[3]-'0')*10;
		sec1+=(s1[4]-'0');
		m1*=60;
		a=m1+sec1;
		//cout<<a<<endl;
		m1=(s2[0]-'0')*10;
		m1+=(s2[1]-'0');
		sec1=(s2[3]-'0')*10;
		sec1+=(s2[4]-'0');
		m1*=60;
		b=m1+sec1;
		scanf("%f",&d);
		//cout<<b<<endl;
		float f=a-b+d;
		if(2*d<=a-b)
		{
			ans=a-b;
		}
		else
		{
		//	a+=d;
			//b+=d;
			//cout<<a<<b<<endl;
			ans=d;
			//cout<<ans<<endl;
			ans+=(a-b)/2;
		}
		printf("%.1f %.1f\n",f,ans);
		
		
		
	}
}
