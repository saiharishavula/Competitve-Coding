#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long sum=0,final=0,dif=0,sum1=0;
    int a[n+1];
    int c[k+1];
    int p=1;
    int b[100005]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<k;i++)
    {
       int t;
        cin>>t;
        c[p++]=t;
        b[t] = 1;
        dif-=a[t]*a[t];
        sum1+=(a[t]);

        final-=a[t]*a[t];
        final+=(a[t]*sum);
    }
   // cout<<final<<endl;
    for(int i=1;i<=k;i++)
    {
        dif+=(sum1*a[c[i]]);
    }
    //cout<<dif<<endl;
    for(int i=1;i<n;i++)
    {
        if(b[i]!=1 && b[i+1]!=1)
        {
            final+=(a[i]*a[i+1]);
            //cout<<final<<endl;
        }
    }
    if(b[n]!=1 && b[1]!=1)
        final+=(a[1]*a[n]);
      //  cout<<final<<endl;
        dif/=2;
    cout<<final-dif;




}
