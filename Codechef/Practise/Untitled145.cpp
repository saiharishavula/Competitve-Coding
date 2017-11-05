#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int b[50001];
long long int a[50001];
bool g(int x,int y)
{
	return x>y;
}
int main()
{
	int t,n,i,k;
	long long int sum,min,max;
	cin>>t;
	while(t--)
	{   k=0;
	    max=0;
	    min=INT_MAX;
	    sum=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    b[i]=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		b[0]++;
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				b[k]++;
			}
			else
			{
				k++;
				b[k]++;
			}
		}
		int c=0,i1,i2;
		sort(b,b+n,g);
		for(i=0;i<n-1;i++)
		{
			sum+=b[i+1];
			b[i+1]=b[i]-b[i+1];
			sort(b+i+1,b+n,g);
		}
		sum+=b[n-1];
		cout<<sum<<endl;
		
		
	}
}


