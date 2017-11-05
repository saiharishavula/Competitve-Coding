#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
long long a[1000005];
int main()
{
int t;
cin>>t;
long long sum1=0,n,i,j,sum2;
while(t--)
{
    sum1=0,sum2=0;
    long long c1=0,c2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
            c1++;
        else
            c2++;
    }
    int f1=1;
    int f2=1;
    c1--;
    if(c1>0)
    {
        f1=0;
        sum1=1;
    }

    if(c2!=0)
    {
        f2=0;
        sum2=1;
    }

        //cout<<c1<<c2<<endl;
    while(c1>0)
    {
        sum1*=2;
        sum1=sum1%M;
        c1--;
    }
     while(c2)
    {
        sum2*=2;
        sum2=sum2%M;
        c2--;
    }
    if(f1==0)
    sum1--;
    //cout<<sum1<<endl;
    if(f2==0)
    {
       sum2-=1;
       //cout<<"k";
    }




    cout<<(sum1+sum2)%M<<endl;

    }
}
