#include<bits/stdc++.h>
using namespace std;
//#include<algorithm>
int a[100001];
int b[100001];
int main()
{   memset(a,0,sizeof(a));
	int n,i,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	int p=0;
	for(i=0;i<=n;i++)
	{
		if(a[i]==0)
		b[p++]=i;
	}
	sort(b,b+p);
	for(i=0;i<p;i++)
	printf("%d ",b[i]);
}
