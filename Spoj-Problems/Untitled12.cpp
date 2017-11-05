#include<iostream>
#include<stack>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	stack<char> s;
	char a[401];
	while(t--)
	{
		cin>>a;
		int l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if(a[i]==')')
			{
				cout<<s.top();
				s.pop();
			}
			else
			{
				if(isalpha(a[i]))
				cout<<a[i];
				else
				if(a[i]!='(')
				s.push(a[i]);
			}
		}
	}
}
