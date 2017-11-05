#include<bits/stdc++.h>
using namespace std;
bool visited[100001];

char s[100001];
vector <int> p[10];
queue <int> q;
int main()
{   int i,k,t1,t2,t3,t4,t5;
    int count[100001];
	cin>>s;
	k=strlen(s);
	memset(visited,false,k);
    for(i=1;i<k;i++)
	{
		t1=s[i]-'0';
		p[t1].push_back(i);
	}
	count[0]=0;
	q.push(0);
	visited[0]=true;
	while(!q.empty())
	{ 
	  t2=q.front();
	  if(t2==k-1)
	  break;
	  q.pop();
	  t5=s[t2]-'0';
	  t3=p[t5].size();
	  for(i=0;i<t3;i++)
	  {
	  	 t4=p[t5][i];
	  	 if(!visited[t4])
	  	 {
	  	 visited[t4]=true;
	  	 q.push(t4);
	  	 count[t4]=count[t2]+1;
	  	 }
	  	
	  }
	  p[t5].clear();
	  if(t2>0&&!visited[t2-1])
	  {
	  	visited[t2-1]=true;
	  	count[t2-1]=count[t2]+1;
	  	q.push(t2-1);
	  }
	  if(!visited[t2+1])
	  {
	  	visited[t2+1]=true;
	  	count[t2+1]=count[t2]+1;
	  	q.push(t2+1);
	  }
	}
	cout<<count[k-1]<<endl;
	
}
