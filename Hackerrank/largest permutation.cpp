#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int a[100005];
    int index[100005];
    int n;
    long k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        index[a[i]]=i;
    }
    int t_max,temp;
   int i=1;
   while(i<n && k)
   {
       if(a[i]== n-i+1)
       {
           i++;
           continue;
       }
       temp = index[n-i+1];
       index[a[i]]=index[n-i+1];
       index[n-i+1]=i;
       swap(a[temp],a[i]);
       i++;
       k--;

   }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
