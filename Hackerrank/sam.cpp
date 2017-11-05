#include<iostream>
using namespace std;
int main()
{
	int t,n,m,i;
	long long int k;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>m;
		k=m;
		for(i=1;i<=n;i++)
		{
			k=k*(k+1)/2;
		}
		cout<<k<<endl;
		
	}
}
