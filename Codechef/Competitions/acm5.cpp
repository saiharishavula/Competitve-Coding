#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        float sum = 1;
        for(int i=1;i<=n;i++)
        sum += (float)1/(float)i;
        float ans;
        ans = (float)100/sum;
        cout<<ans<<endl;
    }
    return 0;
}
