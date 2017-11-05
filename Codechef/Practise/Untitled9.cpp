#include<iostream>
using namespace std;
int main()
{
	int t,n,i;
	long long int k,ans,a[1001];
	char s[4];
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>ans;
		for(i=0;i<n;i++)
		cin>>a[i];
		cin>>s;
		switch(s[0])
		{
			case 'X':
				if(k%2==0)
				cout<<ans<<endl;
				else
				{
					for(i=0;i<n;i++)
					ans=ans^a[i];
					cout<<ans<<endl;
				}
				break;
			case 'A':
				if(k)
				for(i=0;i<n;i++)
				ans=ans&a[i];
				cout<<ans<<endl;
				break;
			case 'O':
				if(k)
				for(i=0;i<n;i++)
				ans=ans|a[i];
				cout<<ans<<endl;
				break;
				
				
				
		}
		
	}
}
