#include<bits/stdc++.h>
using namespace std;
int n,m;
bool isvalid(int i,int j)
{
  if(i<=n && i>=1 && j<=m && j>=1)
  return true;
  return false;
}
// The cats can only get hold of the mouse if cat, mouse, cat form a diagonal of a square.
// so just need to check the diagonal condition
int main()
{
  cin>>n>>m;
  int t;
  cin>>t;
  while(t--)
  {
    bool ok=false;
   int a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e>>f;
   int a1=a,b1=b;
   int count = 0;
   int val=0;
   while(1)
   {
     if(!isvalid(a1,b1))
     break;
     if(a1==c && b1==d)
     count++;
     else
     if(a1==e && b1==f)
     count++;
     a1--;
     b1++;
   }
   if(count==1)
   val++;
   count=0;
   a1=a;
   b1=b;
   while(1)
   {
     if(!isvalid(a1,b1))
     break;
     if(a1==c && b1==d)
     count++;
     else
     if(a1==e && b1==f)
     count++;
     a1++;
     b1--;
   }
   if(count==1)
   val++;
   if(val==2)
   ok = true;
   val=0;
   count=0;
   a1=a;
   b1=b;
   while(1)
   {
     if(!isvalid(a1,b1))
     break;
     if(a1==c && b1==d)
     count++;
     else
     if(a1==e && b1==f)
     count++;
     a1++;
     b1++;
   }
   if(count==1)
   val++;
   count=0;
   a1=a;
   b1=b;
   while(1)
   {
     if(!isvalid(a1,b1))
     break;
     if(a1==c && b1==d)
     count++;
     else
     if(a1==e && b1==f)
     count++;
     a1--;
     b1--;
   }
   if(count==1)
   val++;
   if(val==2)
   ok = true;
   if(!ok)
   cout<<"YES\n";
   else
   cout<<"NO\n";
  }
}
