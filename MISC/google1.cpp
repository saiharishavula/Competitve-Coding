#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int i=1;
    while(i<=t)
    {
        long long int l,r;
        cin>>l>>r;
        if(l==0&&r==0)
        {
            cout<<"0\n";
            i++;
            continue;

        }
        long long int n = min(l,r);
        cout<<"Case #"<<i<<": "<<n*(n+1)/2<<endl;
       i++;
    }

}
