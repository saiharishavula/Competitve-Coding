#include<stdio.h>
int a[251][251];
int s[251][251];
int main()
{
	int n,m,g,d,i,j,k,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            s[i][j] = a[i][j];
 
    
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (s[i][k] + s[k][j] < s[i][j])
                    s[i][j] = s[i][k] + s[k][j];
            }
        }
    }
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d%d%d",&p,&g,&d);
		printf("%d %d\n",s[p][g]+s[g][d],s[p][g]+s[g][d]-s[p][d]);
	}
	
}
