#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long int
#define MOD 1000000007
#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>b;i--)
#define lb lower_bound
#define ub upper_bound
#define pushb push_back
#define popb  pop_back
#define mem(a,b) memset(a,b,sizeof(a))
#define F first
#define S second
#define nl cout<<'\n'

int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,l;
	int total1=0;
	int total2=0;
	int i,j;
	cin>>n>>l;
	int x=0;
	int a[n],b[n];
	std::vector<int> v1;
	std::vector<int> v2;
	rep(i,0,n)
	{
		cin>>a[i];
	}
	rep(i,0,n)
	{
		cin>>b[i];
	}
	rep(i,1,n)
	{
		v1.pushb(a[i]-a[i-1]);
	}
	v1.pushb(l-a[n-1]+a[0]);
	rep(i,1,n)
	{
		v2.pushb(b[i]-b[i-1]);
	}
	v2.pushb(l-b[n-1]+b[0]);

	rep(i,0,n)
	{
		int val=v2[0];
		rep(j,1,n)
		{
			v2[j-1]=v2[j];
		}
		v2[n-1]=val;
		bool flag=true;
		rep(j,0,n)
		{
			if(v1[j]!=v2[j])
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES";nl;
			return 0;
		}

	}
	cout<<"NO";nl;


	return 0;
}
