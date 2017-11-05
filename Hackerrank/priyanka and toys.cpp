#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,t,c=0,max=-1;
    int a[100007];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            c++;
            max=a[i]+4;
        }

    }
    cout<<c<<endl;

}
