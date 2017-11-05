#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a,int s,int e)
{
  if(s==e)
  cout<<a<<endl;
  else{

    for(int i=s;i<=e;i++)
    {
      swap(a+s,a+i);
      permute(a,s+1,e);
      swap(a+s,a+i); // backtrack
    }
  }
}
int main()
{
     char str[] = "AB";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
