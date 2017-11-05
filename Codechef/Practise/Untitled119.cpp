#include<iostream>
#include<cstdio>
using namespace std;
string s[1001];
int dpx[1001][1001];
int dpy[1001][1001];
int main()
{
	int t,n,i,j,c;
	scanf("%d",&t);
	while(t--)
	{   c=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		cin>>s[i];
		//scanf("%s",&s[i]);
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=0;j--)
			{
				if(s[i][j]=='.')
				dpx[i][j]=j!=n-1?dpx[i][j+1]:1;
				else
				dpx[i][j]=0;
				if(s[j][i]=='.')
				dpy[j][i]=j!=n-1?dpy[j+1][i]:1;
				else
				dpy[j][i]=0;
			}
		}
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(dpx[i][j]==1&&dpy[i][j]==1)
			c++;
		}
		printf("%lld\n",c);
		
	}
}
