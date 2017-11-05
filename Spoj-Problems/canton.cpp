#include<cstdio>
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int t;
	long int n,a,b,c,temp;
	scanf("%d",&t);
	while(t--)
	{  temp=0;
		scanf("%ld",&n);
		int i=1;
		while(1)
		{
			temp+=i;
			if(temp>=n)
			break;
			i++;
		}
	//	temp=sqrt(8*n+1)/2;
		a=i;
		b=a*(a+1)/2;
		c=b-n;
	//	cout<<a<<c<<  endl;
		if(a&1)
		cout<<"TERM "<<n<<" IS "<<1+c<<"/"<<a-c<<endl;
		else
		cout<<"TERM "<<n<<" IS "<<(a-c)<<"/"<<1+c<<endl;
		
		
	}
}
