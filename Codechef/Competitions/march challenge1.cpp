#include<iostream>
#include<cstring>
using namespace std;
char a[1001],b[1001];
int main()
{
	int t,i,j,x,y,flag;
	cin>>t;
	while(t--)
	{
		flag=1;
		cin>>a>>b;
		x=strlen(a);
		y=strlen(b);
		for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			if(a[i]==b[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<"No\n";
		else
		cout<<"Yes\n";
		
		
		
	}
	
}
