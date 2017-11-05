#include<bits/stdc++.h>
using namespace std;
int findVal(int a[], int l,int r,int k)
{
    int index = l, count = 1;
    int i;
    for (i = l+1; i <= r; i++)
    {
        if (a[index] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            index = i;
            count = 1;
        }
    }
    count = 0;
    for (i = l; i <= r; i++)
      if (a[i] == a[index])
         count++;
    if (count >= k)
    return a[index];
    else
    return -1;
}
int main(){

  int n,m;
  cin>>n>>m;
  int a[n+2];
  for(int i=1;i<=n;i++)
  cin>>a[i];
  while(m--)
  {
    int l,r,k;
    cin>>l>>r>>k;
    cout<<findVal(a,l,r,k)<<endl;
  }
}
