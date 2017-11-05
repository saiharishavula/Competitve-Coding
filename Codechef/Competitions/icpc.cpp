#include<iostream>
using namespace std;
#include<cmath>
#define M 1000000007
int main()
{
	int t;
	cin>>t;
	long long int c,k,p,k1;
	while(t--)
	{
		cin>>c>>k;
		if(c==1)
		k1=0;
		else
		k1=1;
		p=2;
	//	k1=1;
		while(1)
		{
			p*=2;
			if(p>=c)
			break;
			k1++;
		}
		k=k%M;
		long long int te=k;
		long long int b=k1;
		te--;
		while(te--)
		{
			k1=(k1*b)%M;
			//k1=k1%M;
		}
		cout<<k1<<endl;
		
	}
	
}
