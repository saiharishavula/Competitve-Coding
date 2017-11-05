#include<iostream>
#include<algorithm>
using namespace std;
long long a[1005];
long long b[1005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        long long k;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int flag=0,final=0;
        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=0;j<n;j++)
            {
               if(a[i]+b[j]>=k && b[j]>=0)
               {
                   flag=1;
                   //cout<<a[i]<<" "<<b[j]<<endl;
                   b[j]=-1;
                   break;
               }
            }
            if(flag==0)
                final=1;
        }
        if(final==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
}
