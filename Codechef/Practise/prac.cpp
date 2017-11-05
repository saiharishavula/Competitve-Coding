#include<iostream>
#include<cstring>
using namespace std;
int gcd(int x,int y)
{
	if(y==0)
	return x;
	else
	return gcd(y,x%y);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ 
	   int a,i,t=0,rem=1;
	   char b[250];
	   cin>>a>>b;
	   if(a==0)
	   {
	   cout<<b<<endl;
	   continue;
       }
       for(i=0;i<strlen(b);i++)
       {
       	t=10*t+(b[i]-'0');
       	t=t%a;
       }
       if(t==0)
	   cout<<a<<endl;
	   else
	   cout<<gcd(a,t)<<endl;
	  
       
	}
	return 0;
}
