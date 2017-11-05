#include<iostream>
using namespace std;

int main()
{
    char s[5];
    while(1)
    {
        cin>>s;
        long long i,ans,n,e;
        n=10*(s[0]-'0')+s[1]-'0';
        e=s[3]-'0';
        if(!(n||e))
            break;
        while (e--)
        n*=10;
        int c=1;
        while(c<=n)
            c=c<<1;
        ans=((n-(c>>1))<<1)+1;
        cout<<ans<<endl;

    }
}
