#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n==0)
    {
    cout<<"10\n";
    continue;
    }
    if(n<=9)
    {
    cout<<n<<endl;
    continue;
    }
    vector<int> count;
    for(int i=9;i>=2;i--)
    if(n%i==0)count.push_back(i);
    int i=0;
    vector<int> ans;
    while(i!=count.size() && n!=0)
    {

      if(n%count[i]==0)
      {
        ans.push_back(count[i]);
        n/=count[i];
      }
      else
      i++;
    }
    if(n!=1)
    cout<<"-1\n";
    else{
    for(i=ans.size()-1;i>=0;i--)
    cout<<ans[i];
    cout<<endl;
    }
  }
}
