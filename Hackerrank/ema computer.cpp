#include<bits/stdc++.h>
using namespace std;
int max1(int x,int y)
{
	return x>y?x:y;
}
char s[16][16];
int main()
{
//	cin.sync_with_stdio(false);
	int n,m,i,j,ans=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		cin>>s[i][j];
		
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
		{
			int c=0;
			while ( s[i+c][j]=='G' && s[i-c][j]=='G' && s[i][j+c]=='G' && s[i][j-c]=='G')
		{
            s[i+c][j]=s[i-c][j]=s[i][j+c]=s[i][j-c]='g';
                for (int X=1;X<=n;X++)
                for (int Y=1;Y<=m;Y++)
				{
                    int R=0;
                    while ( s[X+R][Y]=='G' && s[X-R][Y]=='G' && s[X][Y+R]=='G' && s[X][Y-R]=='G')
                        ans=max(ans,(1+4*c)*(1+4*R)),
                        R++;
                }
            c++;
        }
		/*	while(s[i+c][j]=='G' && s[i][j+c]=='G' && s[i-c][j]=='G' && s[i][j-c]=='G')
			{
			    s[i+c][j]=s[i][j+c]=s[i-c][j]=s[i][j-c]='g';
			         for(int I=1;I<=n;I++)
			         for(int J=1;J<=m;J++)
				     {
					    int C=0;
						while(s[I+C][J]=='G' && s[I][J+C]=='G' && s[I-C][J]=='G' && s[I][J-C]=='G')
						{
					    max=max1(max,(1+4*c)*(1+4*C));
						C++;
						}
				     	
			       	}
			
			     c++;
	     	}*/
	     	c=0;
		 	while(s[i+c][j]=='g' && s[i][j+c]=='g' && s[i-c][j]=='g' && s[i][j-c]=='g')
		 	{
		 	
			s[i+c][j]=s[i][j+c]=s[i-c][j]=s[i][j-c]='G';
			c++;
			}
			   
		}
	
	
	printf("%d",ans);
}

