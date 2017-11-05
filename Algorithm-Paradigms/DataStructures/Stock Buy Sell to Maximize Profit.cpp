#include<iostream>
using namespace std;
int maximize_profit(int a[],int n)
{
    int profit=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
        {
            profit+=(a[i+1]-a[i]);
        }
    }
    return profit;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<maximize_profit(a,n);
}
