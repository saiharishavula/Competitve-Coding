#include<iostream>
#include<cstdio>
using namespace std;
bool isSubsetSum(int a[],int n,int sum)
{
    bool res[n+1][sum+1];
    for(int i=0;i<=n;i++)
        res[i][0]=true;
    for(int i=1;i<=sum;i++)
        res[0][i]=false;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=sum;j++)
    {
        if(j>=a[i-1])
            res[i][j] = (res[i-1][j]||res[i-1][j-a[i-1]]);
        else
            res[i][j] = res[i-1][j];
    }
    return res[n][sum];
}
int main()
{
  int set[] = {3, 34, 12, 2};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (isSubsetSum(set, n, sum) == true)
     printf("Found a subset with given sum");
  else
     printf("No subset with given sum");
  return 0;
}
