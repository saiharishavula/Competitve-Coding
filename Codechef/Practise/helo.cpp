#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int min = abs(a-b);
  if(a==0 && b==0)
  cout<<"NO";
  else
  if(min<=1)
  cout<<"YES";
  else
  cout<<"NO";

}
