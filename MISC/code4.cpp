#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long cost=0;
     int i=0,j=n-1;
     int c=1;
     while(i<j)
     {
       if(a[i]>=c && a[j]>=c)
       {
         cost+=(a[i]-c)+(a[j]-c);
         i++;
         j--;
         c++;
       }
       else
       if(a[i]>=c)
       {
         cost+=a[j];
         j--;
       }
       else
       if(a[j]>=c)
       {
         cost+=a[i];
         i++;
       }
       else{
         cost+=a[i]+a[j];
         i++;
         j--;
       }
       if(i==j)
       {
         if(a[i]>=c)
         cost+=(a[i]-c);
         else
         cost+=a[i]+(c-1);
       }
       else
       if(i>j)
       {
         cost+=(c-1);
       }

     }
     cout<<cost<<endl;
  }
}
