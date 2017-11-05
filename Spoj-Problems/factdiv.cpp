#include<iostream>
using namespace std;
#define M 1000000007
#define Max 1000002
long long int a[1000003];
long int i;
void solve()
{
	a[1]=1;
	for(i=2;i<Max;i++)
	{
		a[i]=(a[i-1]*2)%M;
	}
	for(i=2;i<Max;i++)
	{
		a[i]=(a[i-1]+a[i])%M;
	}
	
}
int main()
{
	solve();
	long long int t,l,r;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		cout<<(a[r]-a[l-1])%M<<endl;
		
		
	}
}
