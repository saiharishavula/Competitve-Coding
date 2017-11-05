#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
string s;
int dp[30][300];//returns the number of possibilities (dp states->(position,previousSum))
int len;
//Here you are keeping on adding digits.if the sum(till ith digit)>=prevSum
//you call the subproblem solve(i+1,sum) .this process will be recursively going till the pos==length of input string
int solve(int pos,int prevSum)
{
	if(pos == len)
	return 1;
	if(dp[pos][prevSum]!=-1)
	return dp[pos][prevSum];
	int count = 0;
	int currSum=0;
	FOR(i,pos,len)
	{
		currSum+=(s[i]-'0');
		if(currSum >= prevSum)
		count+= solve(i+1,currSum);
	}
	dp[pos][prevSum] = count;
	return dp[pos][prevSum];
}


int main(){
	int t=1;
   while(1){
	  cin>>s;
	   len=s.length();
	   if(s[0]=='b')
	     break;
	     REP(i,30)
	     memset(dp[i],-1,sizeof dp[i]);
	     printf("%d. %d\n",t++,solve(0,0));

}
}
