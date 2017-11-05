#include<iostream>
using namespace std;
int main()
{
	long long int p,b,i,sum=0,t,k;
	int a[10];
	a[0]=6;
	a[1]=2;
	a[2]=5;
	a[3]=5;
	a[4]=4;
	a[5]=5;
	a[6]=6;
	a[7]=3;
	a[8]=7;
	a[9]=6;
	cin>>p>>b;
	for(i=p;i<=b;i++)
	{   k=i;
		while(k)
		{   //cout<<"k";
			t=k%10;
			sum+=a[t];
			k=k/10;
		}
	}
	cout<<sum;
}
