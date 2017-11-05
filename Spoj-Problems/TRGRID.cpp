#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
      if(n%2==0)
      cout<<"L\n";
      else
      cout<<"R\n";
    }
    else
    {
      int d = min(n,m);
      if(d==n)
      {
        if(d&1)
        cout<<"R\n";
        else
        cout<<"L\n";
      }
      else
      {
        if(d&1)
        cout<<"D\n";
        else
        cout<<"U\n";
      }
    }
  }
}
