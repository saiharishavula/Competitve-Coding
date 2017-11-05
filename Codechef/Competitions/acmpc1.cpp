#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int k,n;
	int a[1001];
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[k]<<endl;
}
