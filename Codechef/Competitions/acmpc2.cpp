#include<iostream>
#include<cstring>
using namespace std;
int v[6]={1,3,2,6,4,5};
int main()
{
	long int t,k,c;
	char s[101];
	cin>>t;
	while(t--)
	{   c=0;
		cin>>s;
		int p=strlen(s);
		cin>>k;
		if(k==1)
		cout<<"YES\n";
		if(k==2)
		{
			int h=s[p-1]-'0';
			if(h%2==0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		if(k==3)
		{
		for(int i=0;i<p;i++)
		{
			c+=s[i]-'0';
			
		}	
		if(c%3==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		}
		if(k==4)
		{
			c=10*(s[p-2]-'0')+s[p-1];
			if(c%4==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
			
		}
		if(k==5)
		{
			if(s[p-1]=='0'||s[p-1]=='5')
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		if(k==6)
		{
			for(int i=0;i<p;i++)
		{
			c+=s[i]-'0';
			
		}	
		int h=s[p-1]-'0';
		if((h%2==0)&&(c%3==0))
		cout<<"YES\n";
		else
		cout<<"NO\n";
		}
		if(k==8)
		{
			c=100*(s[p-3]-'0')+10*(s[p-2]-'0')+s[p-1];
			if(c%8==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
			
		}
		if(k==10)
		{
			if(s[p-1]=='0')
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		if(k==9)
		{
			for(int i=0;i<p;i++)
		{
			c+=s[i]-'0';
			
		}	
		if(c%9==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		}
		if(k==7)
		{   int l=0;
			for(int i=p-1;i>=0;i--)
			{
				c+=v[l]*(s[i]-'0');
				l++;
				if(l==6)
				l=0;
			}
		//	cout<<c<<endl;
			if(c%7==0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		
		
	}
}
