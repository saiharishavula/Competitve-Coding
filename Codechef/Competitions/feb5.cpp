#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

  int n,m;
  cin>>n>>m;
  long long a[n+2];
  int b[m+2];
  for(int i=1;i<=n;i++)
  cin>>a[i];
  for(int i=1;i<=m;i++){
    int temp;
  cin>>temp;
  b[m-i+1] = temp;
  }
  long long wt[n+2];
  wt[0] = 0;
  for(int i=1;i<=n;i++)
  wt[i] = wt[i-1]+a[i];

long long sum=0,total=0;
vector<long long> copy;
for(int i=1;i<=n-b[1]+1;i++)
copy.push_back(wt[i-1+b[1]] - wt[i-1]);
int now,next;
if(m==1)
{
    long long sum=0,final=0;
    for(int j=1;j<=n-b[1]+1;j++){
    sum = wt[j-1+b[1]] - wt[j-1];
    if(final<sum)
    final = sum;
    }
    cout<<final<<endl;
  continue;
}
for(int i=1;i<m;i++){
   now = b[i];
   next = b[i+1];
  int k = next-now-1;
  //cout<<k;
  deque<int>  Q(k);
  vector<long long> temp_copy;
  int j;
  for (j = 0; j < k; j++)
  {
      while ( (!Q.empty()) && copy[j] >= copy[Q.back()])
          Q.pop_back();
      Q.push_back(j);
  }
  for (;j < copy.size(); j++)
  {
    //cout<<c[Q.front()]<<" ";
      temp_copy.push_back(copy[Q.front()]);

      while ( (!Q.empty()) && Q.front() <= (j-k))
          Q.pop_front();
      while ( (!Q.empty()) && copy[j] >= copy[Q.back()])
          Q.pop_back();
      Q.push_back(j);
  }
  temp_copy.push_back(copy[Q.front()]);

  copy.clear();
  //cout<<temp_copy.size()<<endl;
  //cout<<copy.size()<<endl;
 /*for(int j=0;j<temp_copy.size();j++)
 cout<<temp_copy[j]<<" ";
 cout<<endl;*/
  for(j=1;j<=temp_copy.size()-2;j++)
  {
    //cout<<"p";
    sum = wt[j+next-1] - wt[j-1];
    //cout<<sum<<endl;
    sum-=temp_copy[j];
    copy.push_back(sum);

  }
  /*for(int j=0;j<copy.size();j++)
  cout<<copy[j]<<" ";
  cout<<endl;*/

}
for(int i=0;i<copy.size();i++)
{
  if(total<copy[i])
  total = copy[i];

}
cout<<total<<endl;

}
}
