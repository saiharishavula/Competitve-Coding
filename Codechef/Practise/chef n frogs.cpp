#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
vector <long int> a;
vector <int> acp;
long int b[100001];

bool do_this(long int x,long int y)
{
	return a[x]<a[y];
}
int main()
{   
	long int j,d,n,p,i,c=0;
	long int k,temp;
	scanf("%ld%ld%ld",&n,&k,&p);
	a.resize(n);
    acp.resize(n);
	for(i=0;i<n;i++)
	{
	//	scanf("%lld",&temp);
	//	a.push_back(temp);
		scanf("%ld",&a[i]);
		acp[i]=i;
	}
		sort(acp.begin(),acp.end(),do_this);
	for(i=0;i<n-1;i++)
	{
		if((a[acp[i+1]]-a[acp[i]])<=k)
		b[acp[i]]=c;
		else
		{
			b[acp[i]]=c;
			c++;
		}
	}
	b[acp[n-1]]=c;
	while(p--)
	{
		scanf("%ld%ld",&j,&d);
		j--;
		d--;
		if(b[j]==b[d])
		printf("Yes\n");
		else
		printf("No\n");
		
	}
}
