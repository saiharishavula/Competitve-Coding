#include<iostream>
#include<cstdio>
using namespace std;
int a[10005]={0};
int b[6];
void solve()
{
	a[0]=1;
	for(int i=2;i<=10000;i++)
	{
		if(a[i]==0)
		{
			for(int j=2;i*j<=10000;j++)
			a[i*j]=1;
		}
	}
}
int main()
{
	int n,k,t,c,i;
	solve();
	scanf("%d",&t);
	for(int p=1;p<=t;p++)
	{
		c=0;
		int f;
		scanf("%d%d",&n,&k);
		for(int i=0;i<k;i++)
		scanf("%d",&b[i]);
		for(int i=0;i<=n;i++)
		{   f=1;
			if(a[i]==1)
			{
				for(int j=0;j<k;j++)
				{
					if(i%b[j]==0)
					{
						f=0;
						break;
					}
				}
				if(f==1)
				c++;
			}
		}
		printf("Case %d: %d\n",p,c);
		
	}
}
