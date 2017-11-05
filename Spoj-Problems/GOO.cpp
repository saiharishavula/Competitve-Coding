#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,n;
long long int ans1,ans2;
cin>>t;
while(t--)
{
    cin>>n;
    ans1=pow(2,n-1);
    ans2=(pow(2,n-2)*(n-1))+ans1;
    cout<<ans1<<" "<<ans2<<endl;


}
}
