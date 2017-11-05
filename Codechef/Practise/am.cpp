#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define mod 1000000007
#define MAX 100004
#define ll long long int
map<ll,ll> prime,d;
ll i,j,s,res,k,ans,x;
ll l,r,n,temp;
vector<ll> pr;
ll a[1000005];
void solve()
{
	for(i=1;i<MAX;i++)
	a[i]=1;
	cout<<a[1]<<endl;
	temp=sqrt(MAX+1);
/*	for(i=3;i<temp;i+=2)
    {
        if(prime[i/2]==0)
        {
            for(j=i*i;j<MAX+1;j+=2*i)
            {
                prime[j/2]=1;
            }
        }
    }*/
     x=0;
    //ans=1;
        k=2;
        for(n=1;n<MAX;n++)
        {
        
        while(n/k!=0)
        {
            x+=n/k; k*=2;
        }
        a[n]*=(x+1);
        for(i=3;i<=n;i+=2)
        {
            if(prime[i/2]==0)
            {
                x=0;
                k=i;
                while(n/k>0)
                {
                    x+=n/k;
                    k*=i;
                }
                a[n]*=(x+1);
                a[n]%=mod;
            }
        }
    }
}

int main()
{
    solve();
    
    
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        
       cout<<a[1]<<endl;
        cout<<a[5]<<endl;
         cout<<a[4]<<endl;
          cout<<a[3]<<endl;
        //scanf("%lld%lld",&l,&r);
        
        //printf("%lld\n",ans);
    }
    return 0;
}
