#include<iostream>
using namespace std;
int n,k,a[101],i,j,sum=0,c,t;
int min(int x,int y)
{
	return x<y?x:y;
}
int main()
{   c=0;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%k==0)
		t=a[i]/k;
		else
		t=a[i]/k+1;
		for(j=1;j<=t;j++)
		{
			c++;
			if(j==t)
			{
				if(((j-1)*k)<c&&c<=a[i])
				sum++;
			}
			else
			{
				if(((j-1)*k)<c&&c<=j*k)
				sum++;
			}
		}
		
	
	}
	cout<<sum<<endl;
	
}
