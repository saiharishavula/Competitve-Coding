#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a,b,d,count=0,c;
//	int c;
	cin>>a;
	b=a;
	while(a>=10)
	{
	d=0;
	while(b!=0)
	{
		c=b%10;
		d+=(c*c);
		b/=10;
	}
//	cout<<d<<endl;
	b=d;
	a=d;
	count++;
   }
   if(a==1)
   cout<<count<<endl;
   else
   cout<<"-1\n";
}
