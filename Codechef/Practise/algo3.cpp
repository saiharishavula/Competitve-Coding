#include<bits/stdc++.h>
using namespace std;
bool my(pair<long long,int> a,pair<long long,int> b)
{
  if(a.first!=b.first)
  return a.first < b.first;
  else
  return a.second < b.second;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    map<long long int,int> eight;
    map<long long int,int> sixteen;
    int n,k;
    cin>>n>>k;
    vector<pair<long long,int> > res;
    for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;
      int x = temp;
      int j=0;
      long long val=0,val1=0;
      while(x)
      {
        int r = x%10;
        val+=(pow(8,j)*r);
        val1+=(pow(16,j)*r);
        j++;
        x/=10;
      }
      pair<long long,int> te = make_pair(val,8);
      res.push_back(te);
      te = make_pair(val1,16);
      res.push_back(te);
      eight[val] = temp;
      sixteen[val1] = temp;
    }
    sort(res.begin(),res.end(),my);
    if(res[k-1].second == 8)
    cout<<eight[res[k-1].first]<<" "<<res[k-1].second<<endl;
    else
    cout<<sixteen[res[k-1].first]<<" "<<res[k-1].second<<endl;


  }
}
