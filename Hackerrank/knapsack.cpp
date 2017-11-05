#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int t,k,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[k+5],s[n+5];
        for(i=0;i<=k;i++)
            a[i]=0;
        for(i=0;i<n;i++)
            cin>>s[i];
       // sort(s,s+n);
        for(i=1;i<=k;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s[j]<=i)
                {
                    a[i] = max(a[i],s[j]+a[i-s[j]]);
                }

            }
        }
        cout<<a[k]<<endl;


    }
}
