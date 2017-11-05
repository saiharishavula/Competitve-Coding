#include<iostream>
#define M 1000000007
using namespace std;
int main()
{
	int t;
	long long int n,k,i,ans,a,b;
	cin>>t;

	while(t--)
	{
		    ans=1;
			cin>>n>>k;
			a=k-1;
			b=n-1;
			while (b)
           {
            if (b % 2)
		    { ans = (ans * a) % M; }

            a = (a * a) % M;
            b /= 2;
            }

			cout<<(ans*k)%M<<endl;
			
			
	}
}
