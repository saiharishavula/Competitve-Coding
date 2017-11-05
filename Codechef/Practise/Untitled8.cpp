#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j;
	long long int a[51],sum,prod,count;
	cin>>t;
	while(t--)
	{   count=0;
	    sum=0;
	    prod=1;
		cin>>n;
		for(i=0;i<n;i++)
		{cin>>a[i];
		}
		
		for(i=0;i<n;i++)
		{   sum=a[i];
		    prod=a[i];
		    count++;
			for(j=i+1;j<n;j++)
			{
				sum+=a[j];
				prod*=a[j];
				if(sum==prod)
				count++;
			}
		}
			cout<<count<<endl;
		
	}
}
