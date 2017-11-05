#include<iostream>
using namespace std;
long long gcd(long long x,long long y)
{

    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
int main()
{

    int t;
    cin>>t;
    long long a,b;
    while(t--)
    {

        cin>>a>>b;
        cout<<b/gcd(a,b)<<" "<<a/gcd(a,b)<<endl;
    }
}
