#include<iostream>
#include<algorithm>
using namespace std;
int s[100005];
int w[100005];
int p[100005];
int main()
{
	int t,n,u,v,i,min;
	cin>>t;
	while(t--)
	{
		min=100000;
		cin>>n;
		for(i=1;i<=n-1;i++)
		{
			cin>>u>>v>>w[i-1];
			p[i]=w[i-1];
		}
		sort(w,w+(n-1));
		//s[0]=w[n-2];
		cout<<w[n-2]<<endl;
		for(i=1;i<n;i++)
		cout<<"0"<<endl;
		
	}
}
