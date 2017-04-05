#include<bits/stdc++.h>
using namespace std;
// maps + mergesort = gud problem
int merge_count(int a[],int start,int mid,int end)
{
  int b[end+1];
  int i=start,j=mid+1,k = start;
  int c=0;
  while(i<= mid && j<=end)
  {
    if(a[i]<a[j])
      b[k++] = a[i++];
    else
    {
      b[k++] = a[j++];
      c+= (mid-i+1);
    }
  }
  while(i<=mid)
  {
      b[k++] = a[i++];
  }
  while(j<=end)
  {
      b[k++] = a[j++];
  }
  for(int i=start;i<=end;i++)
  a[i] = b[i];

  return c;
}
int mergesort(int a[],int start,int end)
{
  int count=0;
  if(start<end)
  {
    int mid = (start+end)/2;
    count = mergesort(a,start,mid);
    count+= mergesort(a,mid+1,end);
    count+= merge_count(a,start,mid,end);
  }
  return count;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=1;i<=n;i++)
    {
      string s;
      cin>>s;
      m[s] = i;
    }
    int a[n+1];
    for(int i=0;i<n;i++)
    {
      string s;
      cin>>s;
      a[i] = m[s];
    }
    cout<<mergesort(a,0,n-1)<<endl;
  }
}
