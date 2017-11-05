#include<iostream>
#include<algorithm>
using namespace std;
long long a[100005];
long int n,c,i;
int com(int x)
{
	long long prev;
	int count=1;
	prev=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]-prev>=x)
		{
			count++;
			if(count==c)
			return 1;
			prev=a[i];
		}
	}
	return 0;
}
void bsearch()
{
	int start=0,end,mid;
	end=a[n-1]-a[0]+1;
	while(start<end)
	{
		mid=(start+end)/2;
		if(com(mid)==1)
		start=mid+1;
		else
		end=mid;
	}
	cout<<start-1<<endl;
}
int main()
{
	int t;

	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		bsearch();
		
	}
	
}
