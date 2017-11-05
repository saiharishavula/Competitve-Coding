#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    long long n,e,c;
    while(t--)
    { c=0;
      cin>>e>>n;
      while(1)
      {
          if(e<1||n<1||(e==1&&n==1))
            break;
          if(e>n)
          {
              e-=2;
              n-=1;
              c++;

          }
          else
          {

              e-=1;
              n-=2;
              c++;
          }
      }
      cout<<c<<endl;
    }
}
