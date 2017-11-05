#include <bits/stdc++.h>
using namespace std;

int lcs[6101][6101];

/*we will use the LCS() to find the length of
the longest palindromic subsequence*/

int LCS(string A, string B)
{
   for(int i=0; i<=A.length(); ++i)
      for(int j=0; j<=B.length(); ++j)
      {
         /*One string is of length 0*/
         if(i==0 || j==0)
            lcs[i][j]=0;
         /*When last elements are equal*/
         else if(A[i-1]==B[j-1])
            lcs[i][j]=lcs[i-1][j-1] + 1;
         /*When last elements are not equal*/
         else
            lcs[i][j]= max(lcs[i-1][j] ,lcs[i][j-1] );
      }
   return lcs[A.length()][B.length()];
}

int main() {
   int t;
   scanf("%d",&t);
   string S,R;

   while(t--)
   {
      string s;
      cin>>s;
      S = s;
      reverse(s.begin(),s.end());
      R = s;
  		printf("%d\n",S.length()-LCS(S,R));
   }
   return 0;
}
