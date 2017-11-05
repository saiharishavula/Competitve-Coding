#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
	int n,t,d,i,temp;
	long long int sum;
	scanf("%ld",&t);
	while(t--)
	{   vector <int> a;
		scanf("%d%d",&n,&d);
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			a.push_back(temp);
		}
		sort(a.begin(),a.end());

		for(i=n-1;i>0;i--)
		{
		if((a[i]-a[i-1])<d)
		{
				sum+=a[i]+a[i-1];
		i--;
		}
	
		}
		printf("%lld\n",sum);
		
	}
}
