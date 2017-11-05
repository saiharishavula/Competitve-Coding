#include<bits/stdc++.h>
using namespace std;
long a[10000005];
int main()
{
long long n,c=0;
cin>>n;
long temp = sqrt(n);
int flag=1;
for(int i=2;i<=temp+1;i++)
{
    if(n%i==0)
        {
            a[c++]=i;
            a[c++]=n/i;
        }
}
if(c==0)
    cout<<"Leonard";
else
{

int isprime=0;
for(int i=0;i<c;i++)
{
  for(int counter = 2; counter <= sqrt(a[i]); counter++){

  if( (a[i] % counter) == 0 ){
   isprime = 1;
   break;
  }
  if(isprime==1)
    break;
}
}
if(isprime==1)
    cout<<"Sheldon";
else
    cout<<"Leonard";
}





}
