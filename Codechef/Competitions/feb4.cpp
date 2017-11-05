#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int a[n+1];
    int c=0;
  for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]==0)
  c++;
  }
  long long sum = c*1000;
  c=0;
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==0)
    break;
    c++;
  }
  sum+=((n-c)*100);
  cout<<sum<<endl;
}
}
