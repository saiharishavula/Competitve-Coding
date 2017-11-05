#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    if(n==2)
    cout<<"1\n";
    else
    if(n&1)
    cout<<(long long)n/2<<endl;
    else
    {
      long long int d = n/2;
      if(d&1)
      cout<<d-2<<endl;
      else
      cout<<d-1<<endl;
    }
  }
}
