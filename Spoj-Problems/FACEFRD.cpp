/* method 2: go for sets its awesome!!!   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> frd;
	set<int> fof;
	int n,m,id;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>id;
		frd.insert(id);
		if(fof.end()!=fof.find(id))
		fof.erase(id);
		cin>>m;
		while(m--)
		{
			cin>>id;
			if(frd.end()==frd.find(id))
			fof.insert(id);
		}
	}
	cout<<fof.size();
}



/*#include<stdio.h>
int a[10005];
int main()
{
	int n,m,d,c=0;
for(int i=0;i<=10000;i++)
a[i]=0;
	int b[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d",&d);
			a[d]++;
		}
	}
	int flag=0;
	for(int i=1;i<=9999;i++)
	{
		flag=0;
		if(a[i]!=0)
		{
			for(int j=0;j<n;j++)
			{
				if(i==b[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			c++;
		}
	}
	printf("%d",c);
}*/
