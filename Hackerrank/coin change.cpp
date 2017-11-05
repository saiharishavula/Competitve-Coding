#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long a[300][300];
int main()
{
    int n,m;
    int s[51];
    memset(a,0,sizeof(a));
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>s[i];
    sort(s+1,s+m+1);
    for(int i=1;i<=m;i++)
        a[i][0]=1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<s[i])
            a[i][j] = a[i-1][j];
            else
            a[i][j] = a[i-1][j]+a[i][j-s[i]];

        }
    }
    cout<<a[m][n]<<endl;
}
