#include<bits/stdc++.h>
using namespace std;
int n;
//string s;
int checkforone(string s)
{
  int val1=0,val2=0;
  int flip = 1;
  //cout<<s<<endl;
  for(int i=0;i<s.length();i++)
  {
    //cout<<(s[i]-'0')<<" "<<flip<<endl;
    if((s[i]-'0') != flip)
    val1++;
    flip = 1-flip;
  }

  flip = 0;
  for(int i=0;i<s.length();i++)
  {
    if((s[i]-'0') != flip)
    val2++;
    flip = 1-flip;
  }
  //cout<<val1<<" "<<val2<<endl;
  return min(val1,val2);
}
int solve(int res,int count[],string s)
{
  int temp_k=0;
  if(res==1)
  return checkforone(s);
  for(int i=res+1;i<=n;i++)
  {
    if(count[i]){
   temp_k+=(count[i]*(ceil((double)(i-res)/(res+1))));
   //cout<<temp_k<<"now"<<endl;
   }
   }
  return temp_k;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count[n+1];
    memset(count,0,sizeof(count));
    int c=1;
    //count[c]++;
    for(int i=1;i<s.length();i++)
    {
      if(s[i]==s[i-1])
      c++;
      else
      {
        count[c]++;
        c=1;
      }
    }
    if(c!=1)
    count[c]++;
    bool found = false;
    int start=1,end=0;
    for(int i=1;i<=n;i++)
    {
      //if(count[i])
      //cout<<i<<" ";
      if(count[i])
      end = i;
    }
    //cout<<endl;
    //cout<<start<<" "<<end<<endl;
    if(checkforone(s)<=k)
    {
    cout<<"1\n";
    continue;
    }
    int ans;
    while(start<end)
    {
      int mid = (start+end)/2;
      int val = solve(mid,count,s);
    //  cout<<mid<<" "<<val<<endl;
      if(val<=k)
      {
        ans = mid;
        end = mid;
      }
      else
      start = mid+1;
    }
    int val = solve(start,count,s);
    if(val<=k)
    ans = start;
    cout<<ans<<endl;
  }
}
