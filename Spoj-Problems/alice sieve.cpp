#include<iostream>
using namespace std;
int main()
{

    long t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        if(n&1==0)
            cout<<n/2<<endl;
        else
            cout<<(n+1)/2<<endl;
    }
}
