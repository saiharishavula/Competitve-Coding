#include<iostream>
using namespace std;
bool a[1000005];
int main()
{
    int k,l,m;
    cin>>k>>l>>m;
    long i,temp;
    a[0]=false;
    for(i=1;i<1000005;i++)
    {
        a[i]=false;
        if(i>=1&&a[i-1]==false)
            a[i]=true;
        else
            if(i>=k&&a[i-k]==false)
            a[i]=true;
        else
            if(i>=l&&a[i-l]==false)
            a[i]=true;
    }
    for(i=0;i<m;i++)
    {
        cin>>temp;
        if(a[temp])
            cout<<"A";
        else
            cout<<"B";
    }

}
