#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main(){
long long int r,g,b;
cin>>r>>g>>b;
if(g==1)
cout<<g;
else
if(b==1 || b>r){
int n = r;

long long ans=1;
for(int i=1;i<=n;i++)
{
  ans = (ans*g)%M;
}
//ans = (ans*l)%M;
cout<<ans;
}
else
if(b==r)
{
  int n = r/2;
  if(r&1)
  n++;

  long long ans=1;
  for(int i=1;i<=n;i++)
  {
    ans = (ans*g)%M;
  }
  //ans = (ans*l)%M;
  cout<<ans;
}
else
if(b&1)
{
  cout<<((g*g)%M);
}
else
cout<<(g%M);

}
