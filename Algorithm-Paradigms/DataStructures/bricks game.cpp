#include<iostream>
using namespace std;
int main()
{
    int t,n;
    long a[100005];
    long long res[100005],sum,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        res[n]=res[n+1]=res[n+2]=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=n-1;i>=0;i--)
        {
            sum+=a[i];
            temp = min(res[i+1],min(res[i+2],res[i+3]));
            res[i] = sum - temp;
        }
        cout<<res[0]<<endl;
    }
}
