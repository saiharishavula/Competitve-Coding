#include<bits/stdc++.h>
using namespace std;
double a[1000001];
double b[1000001];
int main()
{
	int t,n,q,c;
	double k;
	scanf("%d",&t);
	while(t--)
	{   c=0;
	    int p;
		scanf("%d",&n);
		scanf("%d",&q);
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		b[0]=a[0];
		p=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]!=b[p-1])
			b[p++]=a[i];
		}
		while(q--)
		{   c=0;
			cin>>k;
			int start=0,mid;
			int end=p-1;
			
			while(start<=end)
			{   mid=(start+end)/2;
				if(b[mid]<=k)
				{
					start=mid+1;
				}
				else
				{
				
					c+=(end+1-mid);
						end=mid-1;
				}
			}
			printf("%d\n",c);
		}
	}

}

