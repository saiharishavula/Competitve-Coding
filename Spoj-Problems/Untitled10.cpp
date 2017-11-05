#include<iostream>
#include<map>
using namespace std;
map<long long int,long long int> a;
long long int t,p;
long long int dp(long long int k)
{
	if(k==0)
	return 0;
	t=a[k];
	if(t==0)
	{
		p=max(k,dp(k/2)+dp(k/3)+dp(k/4));
		a[k]=p;
	}
	return a[k];
	
}
int main()
{   long long int n;
	while(cin>>n){
	cout<<dp(n)<<endl;}
}
