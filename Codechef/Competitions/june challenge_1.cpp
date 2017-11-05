#include<iostream>
using namespace std;
int a[5]={8,0,2,4,6};
int main()
{
    long int t;
    long long int k;
    int c,rem;
    long long int quotent;
    int s[25];
    cin>>t;
    while(t--)
    {   c=0;
        cin>>k;
        quotent=k;
        while(1)
        {
            rem=quotent%5;
            s[c++]=a[rem];
            quotent=quotent/5;
            if(rem)
                quotent++;
            if(quotent<=1)
            {
                break;
            }



        }
        for(int i=c-1;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
}
