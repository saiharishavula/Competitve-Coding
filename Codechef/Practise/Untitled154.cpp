#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t,n,i;
	long long int c,k,temp,final;
	cin>>t;
	while(t--)
	{  vector <long long int> a;
		cin>>n;
		c=1;
		final=0;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		sort(a.begin(),a.end());
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			c++;
			else
			c=1;
			if(final<c)
			final=c;
			
		}
		if(n&1)
		{
			if(final>(n/2+1))
			cout<<final<<endl;
			else
			cout<<n/2+1<<endl;
			
		}
		else
		{
			if(final>(n/2))
			cout<<final<<endl;
			else
			cout<<n/2<<endl;
		}
		
	}
	
}
