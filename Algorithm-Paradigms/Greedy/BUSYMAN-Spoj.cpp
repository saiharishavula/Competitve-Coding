#include<bits/stdc++.h>
using namespace std;
#define pair pair<int,int>
bool my(pair a, pair b)
{
  return a.first<b.first;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<pair> v;
    for(int i=0;i<n;i++)
    {
      int a,b;
      cin>>a>>b;
      v.push_back(pair(a,b));
    }
    sort(v.begin(),v.end(),my);
    int ans=1;
    pair temp;
    temp.first = v[0].first;
    temp.second = v[0].second;
    for(int i=1;i<n;i++)
    {
      if(temp.second <= v[i].first)
      {
      ans++;
      temp.first = v[i].first;
      temp.second = v[i].second;
      }
      else
      if(temp.second>v[i].second)
      {
        temp.first = v[i].first;
        temp.second = v[i].second;
      }
    }
    cout<<ans<<endl; 
  }
}
