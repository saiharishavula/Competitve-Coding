#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define sdi(x) scanf("%d",&x)
#define sdl(x) scanf("%lld",&x)
#define pfi(x) printf("%d\n",&x)
#define pfl(x) printf("%d\n",&x)
bool flag=false;
int mini,maxi;
void dfs(int u,int dest,vector<int> &v,int parent,vector<vector<int> > &graph,vector<int> &a){
	if(u==dest){
		flag=true;
		v.push_back(a[dest]);
		sort(v.begin(),v.end());
		maxi=abs(v[0]-v[v.size()-1]);
		for(int i=1;i<v.size();i++){
			mini=min(mini,abs(v[i]-v[i-1]));
		}
		return ;
	}
	if(flag){
		return ;
	}
	int m=graph[u].size();
	v.push_back(a[u]);
	for(int i=0;i<m;i++){
		int y=graph[u][i];
		if(y!=parent){
			dfs(y,dest,v,u,graph,a);
		}
	}
	v.pop_back();
	return ;
}

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<vector<int> > graph(n);
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int q;
	cin>>q;
	while(q--){
		flag=false;
		mini=INT_MAX;
		maxi=INT_MIN;
		char c;
		int x,y;
		cin>>c>>x>>y;
		x--;
		y--;
		vector<int> v;
		dfs(x,y,v,-1,graph,a);
		if(c=='C'){
			cout<<mini<<endl;
		}
		else{
			cout<<maxi<<endl;
		}
	}
}
