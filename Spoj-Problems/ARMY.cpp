#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;

    int a[n];
    int b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int x=0,y=0;
    while(x<n && y<m){
      if(a[x]<b[y])
      x++;
      else
      y++;
    }
    if(y==m)
    cout<<"Godzilla\n";
    else
    cout<<"MechaGodzilla\n";

  }
}
