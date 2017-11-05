#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      a.push_back(temp);
    }
    int c=0;
    int i;
    for(i=n-1;i>=0;i--){
      if(a[i]==1)
      break;
    }
    for(;i>=0;i--){
      if(a[i]==1)
      c++;
      else
      b.push_back(c);
    }
    if(b.size()==0  || b.size()==n)
    {
      cout<<"0"<<endl;
      continue;
    }
    c = b[0];
    vector<int> res;
    res.push_back(c);
    for(i=1;i<b.size();i++){

      if(b[i]==b[i-1]){
        c++;
        res.push_back(c);
      }
      else{
        if(b[i]>(c+1))
        {
          c = b[i];
          res.push_back(c);
        }
        else
        {
          c++;
          res.push_back(c);
        }
      }
    }
    cout<<c<<endl;
  }
}
