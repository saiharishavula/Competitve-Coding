#include<bits/stdc++.h>
using namespace std;
int max1(int a[],int i,int j)
{
    int temp =0;
    for(int k=i;k<=j;k++)
    {
        if(temp<a[k])
            temp = a[k];
    }
    return temp;
}
int main()
{
    int n;
    long long sum=0;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(((a[i]&a[j]) == a[i]) || ((a[i]&a[j])==a[j]))
            {
                //cout<<i<<j<<endl;
                sum+=max1(a,i,j);
            }
        }
    }
    printf("%lld\n",sum);
}
