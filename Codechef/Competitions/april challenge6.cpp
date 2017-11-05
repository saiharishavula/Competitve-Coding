#include<iostream>
#include<cstring>
using namespace std;
char s[100];
int main()
{
	int t,a,k,size,c;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>a>>k;
		cin>>s;
		size=strlen(s);
		if(size<3)
		{
			if(size==1)
			{
				if(s[0]!='a')
				c++;
				if(c<=k)
				cout<<"1\n";
				else
				cout<<"0\n";
				
			}
			if(size==2)
			{
				if(s[0]!='a')
				c++;
				if(s[1]!='a')
				c++;
				if(c<=k)
				cout<<"1\n";
				else
				cout<<"0\n";
			
			}
		}
		else
		cout<<"0\n";
		
	}
}
