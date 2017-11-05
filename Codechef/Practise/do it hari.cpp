#include<iostream>
#include<algorithm>
using namespace std;
long a[200005];
long max1(long a[],long start,long end,long n)
{
    long i=start,sum=0;
    while(i!=end)
    {
        sum+=a[i];
        if(i==n)
            i=1;
        else
        i++;

    }
    return sum;
}
long max2(long a[],long start,long end,long n)
{
    long i=start,sum=0;
    while(i!=end)
    {
        if(i==1)
            i=n;
        else
        i--;
        sum+=a[i];


    }
    return sum;
}
long max3(long a[],long start,long end,long n)
{
    long i=start,sum=0,final =0;
    while(i!=end)
    {
        sum+=a[i];
        if(final>=sum)
            final = sum;
        if(i==n)
            i=1;
        else
        i++;

    }
    return 2*final;

}
long max4(long a[],long start,long end,long n)
{
    long i=start,sum=0,final =0;
    while(i!=end)
    {
        if(i==1)
            i=n;
        else
        i--;
        sum+=a[i];
        if(final>=sum)
            final = sum;


    }
    return 2*final;
}
long max5(long a[],long start,long end,long n)
{
    long i=start,sum=0,final =0,index =-1;
    while(i!=start)
    {
        sum+=a[i];
        if(final>=sum)
        {
            final = sum;
            index = i;
        }

        if(i==n)
            i=1;
        else
        i++;

    }
    if((index > start && index < end )||index==-1)
        return 0;
    else
    {
        if(index==n)
            index=1;
        else
            index++;
        return max1(a,end,index,n);
    }


}
long max6(long a[],long start,long end,long n)
{
    long i=start,sum=0,final =0,index =-1;
    while(i!=start)
    {
        sum+=a[i];
        if(final>=sum)
        {
            final = sum;
            index = i;
        }

        if(i==n)
            i=1;
        else
        i++;

    }
    if(index > start && index < end )
        return max1(a,index,end,n);
    else
        return 0;

}
int main()
{
    long t,n,start,end;
    cin>>t;
    while(t--)
    {
        long res[4];
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cin>>start>>end;
        res[0] = max1(a,start,end,n);
        res[1] = max2(a,start,end,n);
        res[2] = res[1]+max3(a,start,end,n);
          res[3] = res[0]+max4(a,start,end,n);
       // res[4] = res[0]+max5(a,start,end,n);
        //res[5] = res[1]+max6(a,start,end,n);
        sort(res,res+4);
        cout<<res[0]<<endl;



    }
}
