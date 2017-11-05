#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int n,m,s,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>s;
		temp=n-s+1;
		if((s+m-1)<=n)
		{
		cout<<s+m-1<<endl;
	}
		else
		{
			m-=temp;
			if(m%n==0)
			cout<<n<<endl;
			else
			cout<<m%n<<endl;
		}
		
	}
}
