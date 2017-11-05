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
    int a[n+2][n+2];
    bool zero = true;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
    cin>>a[i][j];
    if(a[i][j]!=0)
    zero = false;
    }
    int x[n+1]={0};
    int y[n+1]={0};
    for(int i=1;i<=n;i++)
    {
      int col = (n-i+1);
      for(int row=1;row<=i;row++,col++)
      {
        if(a[row][col]==0)
        x[i]++;
      }
      //cout<<x[i]<<" ";
      //cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
      int row = (n-i+1);
      for(int col=1;col<=i;col++,row++)
      {
        if(a[row][col]==0)
        y[i]++;
      }
      //cout<<y[i]<<" ";
    //  cout<<endl;
    }
    int rem[n+2];
    for(int i=n;i>=1;i--)
    {
      if(i==n)
      rem[n-i+1] = (x[i]);
      else
      rem[n-i+1] = (x[i]+y[i]);
    }
  //  for(int i=1;i<=n;i++)
  //  cout<<rem[i]<<" ";
  //  cout<<endl;
  int flag=0;
    int res=0;
    for(int i=1;i<n;i++)
    {
      int count=((2*i)-(x[i]+y[i]));
      if(count)
      {
        int temp=0;
        for(int j=1;j<=n-i;j++)
        {
          int prev = temp;
          temp+=rem[j];
          if(temp>=count)
          {
          rem[j]-=(count-prev);
          break;
          }
          else
          rem[j] = 0;
        }
        if(temp<count)
        {
          flag=1;
        break;
        }
        res++;
      }
      else
      res++;
      if(flag)
      break;
    }
    if(zero)
    cout<<"0\n";
    else
    cout<<(n-res-1)<<endl;
  }
}
