#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char s[100005];
int a[4];
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	 a[0]=0;
	 a[1]=0;
	 a[2]=0;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='R')
			a[0]++;
			if(s[i]=='G')
			a[1]++;
			if(s[i]=='B')
			a[2]++;
		}
		sort(a,a+3);
		cout<<(n-a[2])<<endl;
		
		
		
	}
}
