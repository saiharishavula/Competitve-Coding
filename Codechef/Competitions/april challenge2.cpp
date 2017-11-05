#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n==1)
		{
			if(m==2)
			cout<<"Yes\n";
			else
			cout<<"No\n";
		}
		else
		if(m==1)
		{
			if(n==2)
			cout<<"Yes\n";
			else
			cout<<"No\n";
		}
		else
		{
			if((m%2==1)&&(n%2==1))
			cout<<"No\n";
			else
			cout<<"Yes\n";
		}
	}
}
