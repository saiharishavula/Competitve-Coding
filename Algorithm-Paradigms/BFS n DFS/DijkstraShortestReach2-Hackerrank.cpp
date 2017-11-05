#include<bits/stdc++.h>
using namespace std;
#define INF 99999999
#define pb push_back
typedef pair<int, int> iPair;
#define mp make_pair
vector<pair<int,int> >adj[10009];

vector<int> dijkstra(vector<int>d,int s,int n)
{
d.clear();
d.resize(n+1);
bool visit[3005];
for(int i=0;i<=n;i++)
d[i]=INF,visit[i] = false;
priority_queue< iPair, vector <iPair> , greater<iPair> > q;

d[s]=0;
q.push(mp(0,s));
while(!q.empty())
{
    int u = q.top().second;
    q.pop();
    if(visit[u])
        continue;
    vector<pair<int,int> >::iterator it;
    for(it=adj[u].begin();it!=adj[u].end();it++)
    {
        int v=it->second;
        int cost=it->first;
        if(d[v]>d[u]+cost)
        {

            d[v]=d[u]+cost;
            q.push(mp(d[v],v));
        }

    }
    visit[u] = true;
}
return d;
}
int main()
{
ios::sync_with_stdio(false);
int T,r,x,y,n,m,i,s,d;

cin>>T;
while(T--)
{
    cin>>n>>m;
    for(i=0;i<=n+9;i++)
    adj[i].clear();
    vector<int>d1;
    d1.resize(n+1);
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>r;
        adj[x].pb(mp(r,y));
        adj[y].pb(mp(r,x));
    }
    cin>>s;
    d1=dijkstra(d1,s,n);
    for(i=1;i<=n;i++)
    {
        if(i!=s)
        {
            if(d1[i]!=INF)
            cout<<d1[i]<<" ";
            else
            cout<<"-1 ";
        }
    }
    cout<<endl;
}
return 0;
}
