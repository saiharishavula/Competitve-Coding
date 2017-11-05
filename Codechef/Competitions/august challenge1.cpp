#include<iostream>
#include<climits>
using namespace std;
void case1(long long c[],long long m[],int n)
{
  long double l1[10];
  int l1_c=0,r1_c=0;
  long double r1[10];
  long double lmax=INT_MIN;

  long double rmin=INT_MAX;
  int f1=0;
  int f2=0;
  for(int i=0;i<n-1;i++)
  {
    if(i&1)
    {
      if(m[i+1]>m[i])
      {
        r1[r1_c++] =(double)(c[i]-c[i+1])/(m[i+1]-m[i]);
      }
      else
      if(m[i+1]==m[i])
      {
        if(c[i]<=c[i+1])
        {
          f1=1;
        }
        else
        r1[r1_c++] = INT_MAX ;
      }
      else
      {
        l1[l1_c++] =(double)(c[i]-c[i+1])/(m[i+1]-m[i]);
      }

    }
    else
    {
      if(m[i+1]>m[i])
      {
        l1[l1_c++] =(double)(c[i]-c[i+1])/(m[i+1]-m[i]);
      }
      else
      if(m[i+1]==m[i])
      {
        if(c[i]>=c[i+1])
        {
          f1=1;
        }
        else
        l1[l1_c++] = -1 ;
      }
      else
      {
        r1[r1_c++] =(double)(c[i]-c[i+1])/(m[i+1]-m[i]);
      }
    }
    if(f1==1)
    break;
    }

  for(int i=0;i<l1_c;i++)
  {
    if(lmax<l1[i])
    lmax = l1[i];
  }
  for(int i=0;i<r1_c;i++)
  {
    if(rmin>r1[i])
    rmin = r1[i];
  }
  long double l2[10];
  int l2_c=0,r2_c=0;
  long double r2[10];
  long double lmax1=INT_MIN;
  long double rmin1=INT_MAX;
  for(int i=0;i<n-1;i++)
  {
    if((i%2)==0)
    {
      if(m[i+1]>m[i])
      {
        r2[r2_c++] =(c[i]-c[i+1])/(m[i+1]-m[i]);
      }
      else
      if(m[i+1]==m[i])
      {
        if(c[i]<=c[i+1])
        {
          f2=1;
        }
        else
        r2[r2_c++] = INT_MAX ;
      }
      else
      {
        l2[l2_c++] =(c[i]-c[i+1])/(m[i+1]-m[i]);
      }

    }
    else
    {
      if(m[i+1]>m[i])
      {
        l2[l2_c++] =(c[i]-c[i+1])/(m[i+1]-m[i]);
      }
      else
      if(m[i+1]==m[i])
      {
        if(c[i]>=c[i+1])
        {
          f2=1;
        }
        else
        l2[l2_c++] = -1 ;
      }
      else
      {
        r2[r2_c++] =(c[i]-c[i+1])/(m[i+1]-m[i]);
      }
    }
  if(f2==1)
    break;
  }


  for(int i=0;i<r2_c;i++)
  {
    if(rmin1>r2[i])
    rmin1 = r2[i];
  }
  for(int i=0;i<l2_c;i++)
  {
    if(lmax1<l2[i])
    lmax1 = l2[i];
  }
    int p=0;
    if(lmax<rmin && rmin>0 && f1==0)
    p++;
    if(lmax1<rmin1 && rmin1>0 && f2==0)
    p++;
    cout<<p<<endl;

        int value1 = -30,r_value1 =-40,l_value1 = -50;
        int value = -60,r_value = -70,l_value =-80;
    if(lmax1<rmin1 && rmin1>0 && f2==0)
    {

      if(lmax1<0)
      lmax1 = -1;
      value1 = rmin1;
      if(value1 != rmin1 )
      {
        r_value1 = rmin1;
        r_value1++;
      }
      else
      r_value1 = rmin1;
      l_value1 = lmax1;

    }

  if(lmax<rmin && rmin>0 && f1==0)
  {
    if(lmax<0)
    lmax = -1;
    value = rmin;
    if(value != rmin )
    {
     r_value = rmin;
      r_value++;
    }
    else
    r_value = rmin;
    l_value = lmax;

  }
  if(l_value == r_value1)
  cout<<l_value1+1<<" "<<"Inf"<<endl;
  else if(l_value1 == r_value)
  cout<<l_value+1<<" "<<"Inf"<<endl;
  else
  {
    if(rmin1>rmin)
    {
      if(lmax<rmin && rmin>0 && f1==0)
      {
  if(rmin1 >= INT_MAX)
  cout<<l_value1+1<<" "<<"Inf"<<endl;
  else
  cout<<l_value1+1<<" "<<r_value1-1<<endl;
     }
    if(lmax1<rmin1 && rmin1>0 && f2==0)
    {
  if(rmin >= INT_MAX)
  cout<<l_value+1<<" "<<"Inf"<<endl;
  else
  cout<<l_value+1<<" "<<r_value-1<<endl;
    }
    }
else
{
  if(lmax1<rmin1 && rmin1>0 && f2==0)
  {
if(rmin >= INT_MAX)
cout<<l_value+1<<" "<<"Inf"<<endl;
else
cout<<l_value+1<<" "<<r_value-1<<endl;
  }
  if(lmax<rmin && rmin>0 && f1==0)
  {
if(rmin1 >= INT_MAX)
cout<<l_value1+1<<" "<<"Inf"<<endl;
else
cout<<l_value1+1<<" "<<r_value1-1<<endl;
 }


}
  }
}
int main()
{
  long int t,n;
  cin>>t;
  long long c[11];
  long long m[11];
  while(t--)
  {
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>c[i]>>m[i];
    if(n==1)
    {
      cout<<"1\n";
      cout<<"0 "<<"Inf\n";
      continue;
    }
    case1(c,m,n);
    //case2(c,m,n);


  }
}
