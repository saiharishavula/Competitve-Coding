#include<bits/stdc++.h>
using namespace std;
unsigned long long mod_expo(unsigned long long x,unsigned long long y, unsigned long long m)
{
    long long ans = 1;
    x = x % m;
    while (y > 0)
    {
        if (y & 1)
            ans = (ans*x)%m;
        y = y>>1;
        x = (x*x)%m;
    }
    return ans;
}
unsigned long long geo(unsigned long long n,unsigned long long b,unsigned long long m){

    unsigned long long k=1;
    unsigned long long x=b%m;
    unsigned long long o = 0;
    while(n>0){
        if (n&1==1)
            o = (x*o + k)%m;
        n = n/2;
        k = ((x+1)*k)%m;
        x = (x*x)%m;
      }
    return o;

}
int main()
{
  int t;
  cin>>t;
  unsigned long long n,a,m;
  while(t--)
  {
    cin>>a;
    cin>>n;
    cin>>m;
    if(n==1 || a==0)
      cout<<(a%m)<<endl;
    else{
      unsigned long long x = a,first;
      first = (a%m);
      int c = 0;
      while(x)
      {
        c++;
        x/=10;
      }
      x = 1;
      for(int i=0;i<c;i++)
      x=(x*10);

      unsigned long long second = geo(n,x,m);
      first = (first*second)%m;
      cout<<first<<endl;

    }
  }
}
