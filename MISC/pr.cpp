#include<bits/stdc++.h>
using namespace std;
struct Pair{
  int a;
  int b;
};
void swap(Pair &x)
{
  int temp = x.a;
  x.a = x.b;
  x.b = temp;
}
int main()
{
  int n,e;
  cin>>n>>e;
  Pair inp[e+3];
  bool visit[n+1];
  for(int i=1;i<=n;i++)
  visit[i] = false;
  for(int i=0;i<e;i++)
  {
    Pair temp;
    cin>>temp.a>>temp.b;
    visit[temp.a] = true;
    visit[temp.b] = true;
    inp[i] = temp;
  }
  bool res = false;
  if(e < n || n==1)
  cout<<"NO\n";
  else
  {
    long long limit = (1<<e);
  for(int i=0;i<limit;i++)
  {
    int temp = i;
    int j=0;
    while(temp)
    {
      if(temp&1)
      {
        swap(inp[j]);
      }
      temp = temp>>1;
      j++;
    }
    bool ok = true;
    map<int,vector<int> > temp_in;
    for(int k=1;k<=n;k++)
        temp_in[k].push_back(1);
         for(int k=1;k<=n;k++)
        temp_in[k].pop_back();

   //cout<<"p";
    for(int k=0;k<e;k++)
    temp_in[inp[k].a].push_back(inp[k].b);
    if(temp_in[1].size()==0)
    {
        ok = false;
        continue;
    }

   int c = temp_in[1][temp_in[1].size()-1];
  // cout<<c<<endl;
   temp_in[1].pop_back();
  //cout<<"k";
   int f = e-1;
   while(f--)
   {
     bool temp_ok = false;
     if(temp_in[c].size() == 0)
     {
       ok = false;
       break;
     }
     int te = temp_in[c][temp_in[c].size()-1];
     temp_in[c].pop_back();
     c = te;
     //cout<<c<<endl;

  /* for(int k=0;k<e;k++)
   {

     if(c == temp_in[k].a)
     {
       c = temp_in[k].b;
       temp_ok  = true;
       temp_in[k].a = 0;
       break;
     }
   }*/
   //if(!temp_ok)
   //ok = false;
   }

    if(c != 1)
    ok = false;
    for(int k=1;k<=n;k++)
    {
      if(!visit[k])
      {
        ok = false;
        break;
      }
    }
    if(ok)
    {
    cout<<"YES\n";
    for(int k=0;k<e;k++)
    cout<<inp[k].a<<" "<<inp[k].b<<endl;
    res = true;
    }
    if(res)
    break;
    temp = i;
    j=0;
    while(temp)
    {
      if(temp&1)
      {
        swap(inp[j]);
      }
      temp = temp>>1;
      j++;
    }

  }
  if(!res)
    cout<<"NO\n";
  }



}
