#include<iostream>
using namespace std;
int main()
{
	long long int t,p,q,i,c1,c2,t1,t2,t3,temp,res;
	int a[11],b[11];
	cin>>t;
	while(t--)
	{   c1=0,c2=0,t1=0,t2=0,res=0;
		cin>>p>>q;
		while(p>0)
		{
			a[c1++]=p%10;
			p/=10;
		}
		while(q>0)
		{
			b[c2++]=q%10;
			q/=10;
		}
		temp=1;
		for(i=c1-1;i>=0;i--)
		{
			t1+=temp*a[i];
			temp*=10;
		}
		temp=1;
		for(i=c2-1;i>=0;i--)
		{
			t2+=temp*b[i];
			temp*=10;
		}
		c1=0;
		t3=t1+t2;
		while(t3>0)
		{
			a[c1++]=t3%10;
		    t3/=10;
		}
		temp=1;
		for(i=c1-1;i>=0;i--)
		{
			res+=temp*a[i];
			temp*=10;
		}
		cout<<res<<endl;
	}
}
