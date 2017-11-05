#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long t,sum;
    int a[5]={1,3,2,-1,-3};
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        n=n%6;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;

    }
}
