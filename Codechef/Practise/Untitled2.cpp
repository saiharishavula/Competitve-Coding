#include<iostream>
#include<cstdio>
//#include<climits>
using namespace std;
//define v 4
//define INF 999
int main()
{   int v,i,j,k;
    cin>>v;
    int dist[v][v];
    for(i=0;i<v;i++)
    {
    	for(j=0;j<v;j++)
    	cin>>dist[i][j];
    }
    
  for(k=0;k<v;k++)
  {
  	for(i=0;i<v;i++)
  	{
  		for(j=0;j<v;j++)
  		{
  			if (dist[i][k] + dist[k][j] < dist[i][j])
               dist[i][j] = dist[i][k] + dist[k][j];
  		}
  	}
  }
  for(i=0;i<v;i++)
  {
  	for(j=0;j<v;j++)
  	{
  		cout<<dist[i][j]<<"    ";
  	}
  	cout<<endl;
  }	
	
}
