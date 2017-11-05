#include<bits/stdc++.h>
using namespace std;
void lcs( char *X, char *Y, int m, int n,char lc[])
{
   int L[m+1][n+1];
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   int index = L[m][n];

   lc[index] = '\0';

   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      if (X[i-1] == Y[j-1])
      {
          lc[index-1] = X[i-1];
          i--; j--; index--;
      }
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
}
int main()
{
  char x[105],y[105];
  while(scanf("%s%s",x,y) != EOF)
  {
  char lc[105];
  int m = strlen(x);
  int n = strlen(y);
  lcs(x, y, m, n,lc);
  int len = strlen(lc);
  int c=0;
  for(int i=0;i<m;i++)
  {
    if(c==len)
    break;
    if(x[i]==lc[c])
    x[i] = '$',c++;
  }
  c=0;
  for(int i=0;i<n;i++)
  {
    if(c==len)
    break;
    if(y[i]==lc[c])
    y[i] = '$',c++;
  }
  int i=0,j=0;
  c=0;
  while(c<len)
  {
    if(x[i]=='$' && y[j]=='$')
    {
      printf("%c",lc[c]);
      i++;
      j++;
      c++;
    }
    else
    if(x[i]=='$')
    {
      printf("%c",y[j]);
      j++;
    }
    else
    if(y[j]=='$')
    {
      printf("%c",x[i]);
      i++;
    }
    else
    {
      printf("%c",x[i]);
      printf("%c",y[j]);
      i++;
      j++;
    }
  }
  for(;i<m;i++)printf("%c",x[i]);
  for(;j<n;j++)printf("%c",y[j]);
  printf("\n");
  }
}
