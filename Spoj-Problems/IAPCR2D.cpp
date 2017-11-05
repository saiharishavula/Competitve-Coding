#include<bits/stdc++.h>
using namespace std;
map<long long,int> m;
long long f[111];
#define N 111
void primepower(int n){
  while(!(n&1)){
    f[2]++;
    n/=2;
  }
  for(int i=3;i<sqrt(n);i+=2){
    while(n%i==0){
      f[i]++;
      n/=i;
    }
  }
  if(n!=1)
  f[n]++;
}
long long findfactors(int n){
primepower(n);
long long res=1;
for(int i=2;i<N;i++)
res*=(f[i]+1);
return res;
}
void presolve(){
  fill(f,f+N,0);
  m[1]=1;
  long long val;
  for(int i=2;i<N;i++)
  val = findfactors(i),m[val] = i;
}
int main()
{
  presolve();
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    if(m[n])
    cout<<m[n]<<endl;
    else
    cout<<"nai\n";
  }
}
