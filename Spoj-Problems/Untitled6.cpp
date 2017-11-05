#include<bits/stdc++.h>
using namespace std;
unsigned long long int fac(int n)
{
	if(n==1)
	return 1;
	else
	return n*fac(n-1);
}
int main()
{
	unsigned long long int t,n,count;
	cin>>t;
	while(t--)
	{ count=0;
	cin>>n;
	while(n>=5)
	{
		count+=n/5;
		n/=5;
	}
	cout<<count<<endl;}
}
