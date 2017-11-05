#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[1005];
long long b[1005];
int main()
{
    int t,n1,n2;
    long long mini=1000000007;
    cin>>t;
    while(t--)
    {
        mini=1000000007;
        cin>>n1;
        for(int i=0;i<n1;i++)
        {
            cin>>a[i];
        }
        cin>>n2;
        for(int i=0;i<n2;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n1);
        sort(b,b+n2);
        int i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(mini>abs(a[i]-b[j]))
            {
                mini=abs(a[i]-b[j]);
            }
            if(a[i]<b[j])
                i++;
            else
                j++;
        }
        cout<<mini<<endl;
    }
}
