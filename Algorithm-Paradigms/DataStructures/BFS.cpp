#include<iostream>
//#include< stdlib.h>
//#include<conio.h>
using namespace std;
int main()
{   int n,m,cost[10][10],visit[10],visited[10],i,j,k,v,qu[10],rear=0,frnt=0;
    cout<<"enter the no. of vertices\n";
    cin>>n;
    cout<<"enter the no. of edges\n";
    cin>>m;
    cout<<"\nedges\n";
    for(int p=1;p<=m;p++)
    {
        cin>>i>>j;
        cost[i][j]=1;
    }
    cout<<"enter the initial vertex\n";
    cin>>v;
    cout<<v;
    visited[v]=1;
    k=1;
    while(k<n)
{
    for(int i=1;i<=n;i++)
    {
        if(visited[i]!=1&&visit[i]!=1&&cost[v][i]!=0)
        {
            visit[i]=1;
            qu[rear++]=i;
        }

    }
    v=qu[frnt++];
    visited[v]=1;
    visit[v]=0;
    cout<<" "<<v;
    k++;

    }
    return 0;

}
