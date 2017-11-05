#include<iostream>
#include<algorithm>
using namespace std;
long a[105];
long my(long x,long y)
{
    return x>y;
}
int main()
{
    int n,k;
    long sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,my);
    int c=1;
    for(int i=0;i<n;i++)
    {
        sum+=(c*a[i]);
        if((i+1)%k==0)
            c++;
    }
    cout<<sum<<endl;


}
