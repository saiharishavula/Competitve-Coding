#include<iostream>
#include<climits>
using namespace std;
int a[100005];
int main()
{
    int t,n,i;
    long long sum,final_sum,final_sum1,temp_min;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        final_sum=0;
        final_sum1=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
                final_sum1+=a[i];
            sum+=a[i];
            if(sum<0)
                sum=0;
            if(final_sum<sum)
                final_sum=sum;

        }
        if(final_sum==0)
        {

            temp_min=INT_MIN;
            for(i=0;i<n;i++)
            {
                if(temp_min<a[i])
                    temp_min=a[i];
            }
            cout<<temp_min<<" ";
            cout<<temp_min<<endl;

        }
        else
        {
            cout<<final_sum<<" ";
            cout<<final_sum1<<endl;
        }

    }

}
