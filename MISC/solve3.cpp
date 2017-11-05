#include<iostream>
using namespace std;
#define M 1000000007

int main()
{
	int t,x,n,i;
	long long int m,k,temp,sum;
	cin>>t;
	while(t--)
	{  sum=0;
	
		cin>>n>>x>>m;
		long long int a[n+2];
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i]=a[i]%M;
		}
		m=m%M;
		k=1;
		sum=(sum+a[x])%M;
		for(i=1;i<x;i++)
		{
			k=((k*m)/i)%M;
			sum=(sum+((k%M)*(a[x-i]%M))%M)%M; 
			m=(m+1)%M;
		//	m++;
		}
		cout<<sum<<endl; 
		
	}
}
