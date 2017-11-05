#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int t,i,c;
	cin>>t;
	char s[1000001];
	while(t--)
	{  c=0;
		cin>>s;
		for(i=0;i<strlen;i++)
		{
			if(s[i]=='9')
			c++;
		}
		if(c==strlen(s))
		{
			for(i=1;i<strlen(s)-1;i++)
			s[i]='0';
			s[0]='1';
			s[strlen(s)-1]='1';
			cout<<s<<endl;
		}
		else
		{
			if(strlen(s)%2==0)
			{
				
			}
		}
	}

	
}
