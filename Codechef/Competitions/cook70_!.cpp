#include<iostream>
using namespace std;
#include<algorithm>
long a[100005];
int main()
{
    long n,i,sum=0,res;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    res=sum-(2*n);
    if(res<=0)
        cout<<n<<endl;
    else
    {
        cout<<(n+(res/2)+(res%2))<<endl;
    }


}
