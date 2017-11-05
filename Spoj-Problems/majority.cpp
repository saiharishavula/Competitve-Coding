#include<iostream>
//#include<algorithm>
#include<cstring>
using namespace std;
long a[1005];
long b[1005];
int main()
{
    std:ios::sync_with_stdio(false); // or cin.sync_with_stdio(false)
    int t;
    long long n,i,temp,maxi,ans;
    cin>>t;
    while(t--)
    {
        maxi=0;
        ans=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            if(temp<0)
            {
                temp*=-1;
                b[temp]++;
                if(maxi<b[temp])
                {
                   maxi=b[temp];
                   ans=temp;
                }

            }
            else
            {
                a[temp]++;
                if(maxi<a[temp])
                {
                    maxi=a[temp];
                    ans=temp;
                }

            }
        }

        if(maxi>(n/2))
        {
            cout<<"YES "<<ans<<"\n";
        }
        else
            cout<<"NO\n";
    }
}
