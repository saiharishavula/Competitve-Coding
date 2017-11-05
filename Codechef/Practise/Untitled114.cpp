#include<iostream>
using namespace std;
int main()
{
	int t,n,a[101],i,min,f;
	long int m;
	cin>>t;
	while(t--)
	{  min=0;
	f=1;
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>min)
			min=a[i];
			
		}
		for(i=0;i<n;i++)
		{   
		    m-=min-a[i];
		    if(m<0)
		    {
		    	f=0;
		    	break;
		    }
			a[i]+=min-a[i];
		}
		if(f==1&&m%n==0)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
