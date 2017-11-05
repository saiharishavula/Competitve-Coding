#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int lcs[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                lcs[i][j]=0;
            else
            if(a[i-1]==b[j-1])
                lcs[i][j] = lcs[i-1][j-1]+1;
            else
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);

        }
    }
    vector<int> s;
    int i,j;
    i=n;
    j=m;
    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            s.push_back(a[i-1]);
            i--;
            j--;

        }

        else
        if(lcs[i-1][j]>lcs[i][j-1])
            i--;
        else
            j--;

    }
    for(int i=s.size()-1;i>=0;i--)
        cout<<s[i]<<" ";
    cout<<endl;

}
