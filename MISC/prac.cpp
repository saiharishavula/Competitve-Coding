#include<iostream>
using namespace std;
int n, m;
int mat[100][100];
bool v[100][100];
int dp[100][100];
bool flag = false;
int max4(int i,int j,int k,int l){
	if(i>j && i>k && i>l)
	return i;
	if(j>k && j>l)
	return j;
	if(k>l)
	return k;
	else
	return l;
}
int recur(int i, int j) {
	if (i>=n+1 || i<=0 || j<=0 || j>=m+1 || mat[i][j]==0)
		return 0;
	if (v[i][j]==true) {
		flag = true;
		return -1;
	}
	int val = mat[i][j];
	v[i][j] = true;
	int sol1 = recur(i+val,j);
	int sol2 = recur(i-val,j);
	int sol3 = recur(i,j+val);
	int sol4 = recur(i,j-val);
	dp[i][j] = max4(sol1,sol2,sol3,sol4)+1;
	return dp[i][j];

}
int main() {
	int t;
	cin>>t;
	while (t--) {
		flag = false;
		cin>>n>>m;
		for (int i = 1; i<=n;i++)
		for (int j = 1; j<=m; j++) {
			v[i][j] = false;
			dp[i][j] = 0;
			char s;
			cin>>s;
			mat[i][j] = s-'0';
		}
		recur(1,1);
		if(flag)
		cout<<"-1\n";
		else
		cout<<dp[1][1]<<endl;
	}
}
