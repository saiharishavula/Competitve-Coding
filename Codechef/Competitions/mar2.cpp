#include<bits/stdc++.h>
using namespace std;
bool my(int x,int y)
{
return x>y;
}
int main()
{
  int n;
  cin>>n;
  int a[n][n];

  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
  cin>>a[i][j];

  for(int i=0;i<n;i++)
  {
    int inc=0,dec=0;
    vector<int> res;
    map<int,int> m;
    for(int j=0;j<n;j++)
    {
    int temp = a[i][j];
    m[temp] = j;
    res.push_back(temp);
    }
    sort(res.begin(),res.end());
    for(int j=0;j<n;j++)
      inc+=(j-m[res[j]])*(j-m[res[j]]);
    sort(res.begin(),res.end(),my);
    for(int j=0;j<n;j++)
      dec+=(j-m[res[j]])*(j-m[res[j]]);
    if(inc>=dec)
    {
      for(int j=0;j<n;j++)
      cout<<res[j]<<" ";
    }
    else
    {
      for(int j=n-1;j>=0;j--)
      cout<<res[j]<<" ";
    }
    cout<<endl;

  }
}
