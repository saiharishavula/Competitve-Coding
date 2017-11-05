#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){

  int n,m;
  cin>>n>>m;
  long long sum=0;
  int i;
  for(i=0;i<n-1;i++)
  sum+=pow(2,i);
  for(;i<n+m-1;i++);
  sum+=pow(2,i);
  cout<<sum<<endl;

  }
}
