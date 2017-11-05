#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a[100001],i,j,count,k;
	int p;
	cin>>t;
	while(t--)
	{   k=0;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			count=0;
			count++;
			k++;
			p=0;
			for(j=i+1;j<n;j++)
			{
				if(p==0)
				{
					if(a[j]==a[i]+1 || a[j]==a[i]-1)
					{count++;
					p=1;}
					else
					{
						p=0;
					}
				}
				else
				{
					if(a[j]==a[i])
					{
					count++;
					if(count%2==1)
					k++;
					p=0;	
					}
			        else
					p=1;
				}
			}
		}
		cout<<k%1000000007<<endl;
	}
}
