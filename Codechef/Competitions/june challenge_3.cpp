#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;
        if(n%6==0)
            cout<<"Misha\n";
        else
            cout<<"Chef\n";
    }
}
