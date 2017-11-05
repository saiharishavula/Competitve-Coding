#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <long int> x[101];
vector <long int> y[101];
vector <long int> v;
long int a[1001][1001];
int t,n,m,i,j,p,k,c,final;
int main()
{
	
	scanf("%d",&t);
//	cin.sync_with_stdio(false);
	while(t--)
	{   final=0;
		cin>>n>>m;
	//	x.resize(11);
	//	y.resize(11);
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			scanf("%ld",&a[i][j]);
			x[i].push_back(a[i][j]);
		}
		if(n==1&&m==1)
		{
			printf("1\n");
			continue;
		}
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
	    y[i].push_back(a[j][i]);
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;j<m;j++)
	    	{
	    		
	    		for(p=0;p<m;p++)
	    		v.push_back(x[i][p]);
	    		for(k=0;k<n;k++)
	    		{
	    			if(k!=i)
	    			v.push_back(y[j][k]);
	    		}
	    		sort(v.begin(),v.end());
	    		c=1;
	    		for(p=1;p<v.size();p++)
	    		{
	    			if(v[p]==v[p-1])
	    			c++;
	    			else
	    			c=1;
	    			if(final<c)
	    			final=c;
	    		}
	    		  v.clear();
	    		
	    	}
	    }
	    printf("%d\n",final);
	  for(i=0;i<101;i++)
	  {
	  	x[i].clear();
	  	y[i].clear();
	  }
		
	}
} 
