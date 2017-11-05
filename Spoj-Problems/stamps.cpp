#include<iostream>
#include<algorithm>
using namespace std;
int a[10001];
bool g(int x,int y)
{
	return x>y;
}
int main()
{
	long long int t,b,sum,n,i;
	
	cin>>t;
	int p=1;
	while(t--)
	{   sum=0;
	int c=0;
		cin>>b>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,g);
		for(i=0;i<n;i++)
		{  sum+=a[i];
			c++;
			if(sum>b)
			break;
		
		}
		cout<<"Scenario #"<<p<<":"<<endl;
		if(sum<b)
		cout<<"impossible"<<endl;
		else
		cout<<c<<endl;
		
		p++;
	}
}
