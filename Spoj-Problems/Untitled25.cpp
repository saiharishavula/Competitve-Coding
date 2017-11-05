#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,s,k,a[1001],i,c=0;
	long int sum=0;
	cin>>n>>s>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
		if(sum>s*k)
		break;
		sum+=a[i];
		c++;
		
	}
	cout<<c<<endl;
}
