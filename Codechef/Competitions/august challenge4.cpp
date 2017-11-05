#include<iostream>
#include<climits>
using namespace std;
int main()
{
    long t,x,y,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long s[n+1];
        long long arr1[n+1];
        long long arr2[n+1];
        long long arr3[n+1];
        long long arr4[n+1];
        for(i=0;i<n;i++)
            cin>>s[i];
        cin>>x>>y;
        x--;
        y--;
        long long res = 0;
        long long res1 = 0;
        long long res2 = 0;
        long long sum=0;
        long long c=0;
        i=x;
        arr1[i]=0;
        while(i!=y)
        {
            sum+=s[i];
            if(sum<res && sum<=0)
            {
                res = sum;
                c=2*res;

            }
            i = (i+1)%n;
            arr1[i] = c;
        }
        long long temp1 = sum;
        i=x;
        res=0;
        arr2[i]=0;
        sum=0;
        c=0;
        while(i!=y)
        {
            i = (i-1+n)%n;
            sum+=s[i];
            if(sum<res && sum<=0)
            {
                res = sum;
                c=2*res;

            }
            arr2[i] = c;
        }
        long long temp2 = sum;
        i=y;
        arr3[i]=0;
        sum=0;
        res=0;
        c=0;
        while(i!=x)
        {
            sum+=s[i];
            if(sum<res && sum<=0)
            {
                res = sum;
                c=2*res;

            }
            i = (i+1)%n;
            arr3[i] = c;
        }
        i=y;
        arr4[i]=0;
        sum=0;
        res=0;
        c=0;
        while(i!=x)
        {
            i = (i-1+n)%n;
            sum+=s[i];
            if(sum<res && sum<=0)
            {
                res = sum;
                c=2*res;

            }
            arr4[i] = c;
        }
        i=x;
        sum=0;
        c=0;
        while(i!=y)
        {
            sum = arr1[i]+arr4[i];
            if(res1>sum)
                res1 = sum;
            i = (i+1)%n;

        }
        i=x;
        sum=0;
        c=0;
        while(i!=y)
        {
            sum = arr2[i]+arr3[i];
            if(res2>sum)
                res2 = sum;
            i = (i-1+n)%n;

        }
        cout<<min(temp1+res2,temp2+res1)<<endl;




    }
}
