#include<iostream>
using namespace std;
long a[50005];
int main()
{
    long long max_so_far,final_sum;
    int t,i,n;
    cin>>t;
    while(t--)
    {
        max_so_far=0;
        final_sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>=0;i--)
        {
            if(max_so_far<a[i])
                max_so_far=a[i];
            final_sum+=(max_so_far-a[i]);
        }
        cout<<final_sum<<endl;

    }

}
