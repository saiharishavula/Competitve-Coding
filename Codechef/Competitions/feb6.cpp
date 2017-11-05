#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
  int o1,o2;
  cin>>o1>>o2;
  int state = o1/2 + 1;
  int distrct = o2/2 + 1;
  int n = o1*o2;
  int a[n+2];
  for(int i=1;i<=n;i++)
  cin>>a[i];
  a[0] = a[n];
  int temp=0;
  for(int i=1;i<=o2;i++)
  temp+=a[i];
  int res[n+2];
  res[1] = temp;
  for(int i=2;i<=n;i++)
  {

    res[i] = temp-a[i-1]+a[(i+o2-1)%n];
    temp = res[i];

  }
  res[0] = res[n];
  int min = INT_MAX;
  int index = -1;
  for(int i=1;i<=n;i++)
  {
    if(min> res[i] && res[i]>=distrct)
    {
      min = res[i];
      index = i;
    }
  }
  int flag = 1;
  if(index==-1)
  flag = 0;
  else{
    vector<int> v;
    for(int i=1;i<=o2;i++)
    {
    //  if(res[i]==min)
      v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
    int count=0;
    index = v[i];
  for(int j=1;j<=o1;j++)
  {
    if(res[index]>=distrct)
    count++;
    index=(index+o2)%n;
  }
  if(count<state)
  flag = 0;
  else{
    flag=1;
  break;
  }
  }
  }
  cout<<flag<<endl;
}
}
