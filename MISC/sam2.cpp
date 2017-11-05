#include<iostream>
#include<algorithm>
using namespace std;
long int a[100001];
long int b[100001];
int main()
{
	long int n,m,final=0,i;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}

	sort(a,a+m);
	if(m!=1)
	{
	for(i=0;i<m-1;i++)
	{
		if(final<(a[i+1]-a[i])/2)
		final=(a[i+1]-a[i])/2;
	}
	}
	else
	{
		if(a[0]>=n/2)
		final=i;
		else
		final=n-(i+1);
	}
	if(final<a[0])
	final=a[0];
	if(final<((n-1)-a[m-1]))
	final=n-1-a[m-1];
	if((m==1)&&(n==2)&&a[0]==0)
	cout<<"1";
	else
	if((m==1)&&(n==1)&&a[0]==0)
	cout<<"0";
	else
	cout<<final;
	
}
