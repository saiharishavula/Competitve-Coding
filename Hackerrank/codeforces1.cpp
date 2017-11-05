#include<iostream>
using namespace std;
int main()
{
    long c1,c2,n,a,b;
    cin>>n;
    c1=0;
    c2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            c1++;
        else
            if(a<b)
            c2++;
    }
    if(c1>c2)
        cout<<"Mishka";
    else
        if(c1<c2)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";

}
