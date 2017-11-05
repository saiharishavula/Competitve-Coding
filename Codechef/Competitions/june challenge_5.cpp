#include<iostream>
#include<cstdio>
using namespace std;
#include<vector>
/* This function calculates (a^b)%MOD */
#define MOD 1000000007
long long int power(long long int x,long long int y)
{
    if (y == 0)
        return 1;
    long long int p = power(x, y/2) % MOD;
    p = (p * p) % MOD;

    return (y%2 == 0)? p : (x * p) % MOD;
}


long long int a[100005];
int main()
{
    cin.sync_with_stdio(false);
    long long n,k,i,zeros;
    long long int sum,temp;
    int t;
    cin>>t;
    while(t--)
    {  zeros=0;
        sum=0;
        temp=1;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
             cin>>a[i];
             if(a[i]==0)
                zeros++;
        }

            int flag=1;
            int flag1=1;
            if(zeros!=0)
            {
                n-=zeros;
                flag1=0;

            }


        if(n>=k)
        {

           if(k%2==0)
           {
              sum++;
              flag=0;
           }
           vector<long long int> modInverse(k + 5,0);
           modInverse[1] = 1;
           for(int i = 2; i <= k; i++)
           {
            modInverse[i] = (-(MOD/i) * modInverse[MOD % i]) % MOD + MOD;
           }


        for(i=1;i<=k;i++)
		{
			temp=(temp*(n+1-i))%MOD;
			temp=(temp*modInverse[i])%MOD;
			//k=k/b[i];
			if(flag1==0)
            {
                sum=(sum+temp)%MOD;
            }
            else
            {
			if(flag==0)
            {
                if(i%2==0)
                {
                    sum=(sum+temp)%MOD;
                }
            }
            else
            {
                if(i&1)
                {
                    sum=(sum+temp)%MOD;
                }
            }
            }
		   }
}
        else
        {
            if(flag1==0&&n!=0)
                sum=2;
            else
                sum=1;
            for(int i=0;i<n-1;i++)
            {
                sum=(sum*2)%MOD;
            }

        }
        cout<<sum%MOD<<endl;
    }

}
