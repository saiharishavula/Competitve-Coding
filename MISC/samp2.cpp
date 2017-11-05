#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int t,x1,x2,x3,y1,y2,y3,k,x,y,z,f;
	double a,b,c;
	double p=pow(10,-6);
	cin>>k;
	if(k==1)
	{
		cin>>t;
		while(t--)
		{
			cin>>x1>>y1>>x2>>y2>>x3>>y3;
			a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
			c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
			if((abs(a-b)<p)||(abs(b-c))<p||(abs(c-a))<p)
			{
				cout<<"Isosceles triangle\n";
				
			}
			else
			cout<<"Scalene triangle\n";
			
			
			
		}
	}
	if(k==2)
	{
		cin>>t;
		while(t--)
		{
			cin>>x1>>y1>>x2>>y2>>x3>>y3;
			a=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			b=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
			c=((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
			if((abs(a-b)<p)||(abs(b-c))<p||(abs(c-a))<p)
			f=1;
			else
			f=2;
			if(f==1)
			{
				if(c==(a+b)||b==(a+c)||a==(b+c))
				cout<<"Isosceles right triangle\n";
				else
				{
							if((b+c-a)<0||(a+c-b)<0||(b+a-c)<0)
						cout<<"Isosceles obtuse triangle\n";
						else
						cout<<"Isosceles acute triangle\n";
				}
				
				
			}
				if(f==2)
			{
					if(c==(a+b)||b==(a+c)||a==(b+c))
				cout<<"Scalene right triangle\n";
					else
				{
						if((b+c-a)<0||(a+c-b)<0||(b+a-c)<0)
						cout<<"Scalene obtuse triangle\n";
						else
						cout<<"Scalene acute triangle\n";
				}
				
			}
			
			
			
		}
	}
	
}
