#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int s[2001][2001];
int min1(int x,int y,int z)
{
	if(x<y&&x<z)
	return x;
	else
	{
		if(y<z)
		return y;
		else
		return z;
	}
}
int main()
{
	int t,i,j,s1,s2;
	scanf("%d",&t);
	
	char a[2001],b[2001];
	while(t--)
	{
		cin>>a>>b;
		s1=strlen(a);
		s2=strlen(b);
		for(i=0;i<=s1;i++)
		s[i][0]=i;
		for(i=1;i<=s2;i++)
		s[0][i]=i;
		for(i=1;i<=s1;i++)
		{
			for(j=1;j<=s2;j++)
			{
			 s[i][j]=min1((a[i-1]==b[i-1]?0:1)+s[i-1][j-1],s[i-1][j]+1,s[i][j-1]+1);
			}
		}
		printf("%d\n",s[s1][s2]);
		
		
	}
}
