#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		int c=0;
		while(m!=n)
		{
			if(n%2)
			n++;
			else
			{
			if(n>=m)
			n=n/2;
			else
			{
				c=c+m-n;
				break;
		    }
		}
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
} 
