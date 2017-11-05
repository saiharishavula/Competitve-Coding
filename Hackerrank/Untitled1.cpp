#include<iostream>
using namespace std;
int main()
{
	long int n,q,l,k,i,p;
	cin>>n>>q;
	long int a[n],b[n];
	for(i=1;i<=n;i++)
	cin>>a[i];
	while(q--)
	{    p=1;
		cin>>l>>k;
		for(i=1;i<=n;i++)
		{
			if(a[i]>=l)
			b[p++]=a[i];
			if(p==k+1)
			break;
		}
	 cout<<b[k]<<endl;
	}
}
