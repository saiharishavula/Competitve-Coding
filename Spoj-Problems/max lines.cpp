#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,l=1;
	long long int r;
	double sum;
	cin>>t;
	while(t--)
	{
		cin>>r;
		sum=4*r*r+0.25;
		cout<<"Case "<<l++<<": ";
		printf("%0.2f\n",sum);
	}
}
