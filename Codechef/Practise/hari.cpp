#include<iostream>
using namespace std;
int min(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int t,h,m;
	int a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>h>>m;
		h--;
		m--;
		a=h/11;
		b=m/11;
	//	cout<<a<<b;
		if(a==0&&b==0)
		{
			if(h==10&&m==10)
			cout<<"10\n";
			else
			cout<<min(h,m)+1<<endl;
		}
		else
		{
			if(h%10==0)
			c=9;
			else
			c=h%10;
			if(m%10==0)
			d=9;
			else
			d=h%10;
			//d=m/10;
			if(a>0&&b>0)
			{
				cout<<10+min(a,b)+a+b<<endl;
			}
			else
			{
				if(a<1)
				{
					cout<<c<<endl;
					cout<<c+1+min(c,b)<<endl;
				}
				else
				{

					cout<<d+1+min(d,a)<<endl;
		
				}
				
				
			}
		}
		
		
		
	}
}
