#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli store[100005];
int c;
void calc()
{
	lli i,k;
	int d;
    for(i=1;i<=100000;i++)
	{
		k=i*i;
		while(k)
		{
			d=k%10;
			if(d==0 || d==1 || d==4 || d==9);
			else break;
			k/=10;
		}

		if(k) continue;
		store[c++]=i*i;
	}
}

int main()
{
	lli a, b;
	int t,ans;
	calc();
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld %lld", &a, &b);
		ans= upper_bound(store,store + c, b) - lower_bound(store, store+c, a);
		printf("%d\n", ans);
	}

	return 0;
}
