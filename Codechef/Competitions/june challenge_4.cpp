#include<iostream>
#include<climits>
using namespace std;
long long int a[100005];
int main()
{
    long long int max1=INT_MIN,min1=INT_MAX;
    long int n,q;
    long long t;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max1)
            max1=a[i];
        if(a[i]<min1)
            min1=a[i];

    }
    while(q--)
    {
        cin>>t;
        if(t>=min1&&t<=max1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }



}
