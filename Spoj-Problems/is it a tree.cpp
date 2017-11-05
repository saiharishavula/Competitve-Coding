#include<iostream>
#include<stack>
#include<vector>
                           /*easy through vectors*/
using namespace std;
vector <int> a[10001];
int n,m,i,x,y,k;
int dfs(vector <int> a[])
{
	int count =0;
	int visited[n+1];
	stack <int> s;
	for(i=1;i<=n;i++)
	visited[i]=0;
	s.push(1);
	while(!s.empty())
	{
	
		k=s.top();
		s.pop();
		if(visited[k]==1)
		return 0;
		else
		{
			count++;
			visited[k]=1;
			for(i=0;i<a[k].size();i++)
			{
				s.push(a[k][i]);
				
			}
			
		}
	}
	if(count!=n)
	return 0;
	else
	return 1;
	
}
int main()
{
	
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		a[x].push_back(y);
	}
	if(dfs(a)==1&&n-m==1)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	
	
}
