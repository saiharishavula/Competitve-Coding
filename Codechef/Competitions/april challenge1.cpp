#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int a[4];
int main()
{
	int t;
	long long int k,ans;
	cin>>t;
	while(t--)
	{
		cin>>a[0]>>a[1]>>a[2];
		cin>>k;
		sort(a,a+3);
		if(k<=a[0])
		{
			ans=(k-1)*3+1;
		}
		else
		if(k<=a[1])
		{
			ans=(k-1)*2+1+a[0];
		}
		else
		if(k<=a[2])
		{
			ans=k+a[1]+a[0];
		}
		cout<<ans<<endl;
	}
}
