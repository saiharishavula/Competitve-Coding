#include<bits/stdc++.h>
using namespace std;
struct Pair
{
	int a;
	int b;
	bool operator<(const Pair& rhs)const
	{
		return b>rhs.b;
	}

};
int main()
{
  int n,c;
  Pair inp[c+1];
  for(int i=0;i<c;i++)
  {
    Pair temp;
    cin>>temp.a>>temp.b;
    inp[i] = temp;
  }
  sort(inp,inp+c);
  long long sum=0;
  for(int i=0;i<c;i++)
  {
    if(n<=inp[i].b)
    {
      sum+=(n*inp[i].a);
      break;
    }
    else
    {
      sum+=(inp[i].a*inp[i].b);
    }
  }
  cout<<sum;
}
