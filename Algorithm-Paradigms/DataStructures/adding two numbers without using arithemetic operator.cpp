#include<iostream>
using namespace std;
long int add(long x,long y)
{
    while(y!=0)
    {
        int carry = x&y;
        x = x^y;
        y = carry<<1;
    }
    return x;
}
int main()
{

 long a,b;
 cin>>a>>b;
 cout<<add(a,b);
}
