#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ldp[n+1]={0};
    ldp[0]=1;
    int rdp[n+1]={0};
    rdp[n-1]=1;
    for(int i=1;i<n;i++)
    {
    int temp=1;
    for(int j=0;j<i;j++){
      if(a[i]>a[j])
      temp = max(temp,ldp[j]+1);
    }
    ldp[i]=temp;
    }
    for(int i=n-2;i>=0;i--)
    {
    int temp=1;
    for(int j=i+1;j<n;j++){
      if(a[i]>a[j])
      temp = max(temp,rdp[j]+1);
  }
    rdp[i]=temp;
    }

    int ans=0;
    for(int i=0;i<n;i++)
    ans = max(ans,ldp[i]+rdp[i]-1);
    cout<<ans<<endl;
  }
}
