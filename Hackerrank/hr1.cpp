#include<iostream>
using namespace std;
int main()
{
        int t,m,n;
        cin>>t;
        int a[105];
        long b[105];
        long long time;
        while(t--)
        {
            time=0;
            cin>>n>>m;
            for(int i=0;i<n;i++)
            {
                cin>>a[i]>>b[i];
                time+=a[i];
            }
            long long s[n+5][time+5];
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=time;j++)
                {
                    if(i==0 || j==0)
                        s[i][j] = 0;
                    else
                    {
                    if(j>=a[i-1])
                      s[i][j] = max(b[i-1]+s[i-1][j-a[i-1]],s[i-1][j]);
                     else
                        s[i][j] = s[i-1][j];
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                long long temp;
                cin>>temp;
                if(temp>time)
                    cout<<s[n][time]<<" ";
                else
                    cout<<s[n][temp]<<" ";
            }
            cout<<endl;


        }
}
