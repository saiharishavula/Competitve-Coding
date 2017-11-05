#include<stdio.h>
#include<limits.h>
long long int a[101][101];

int main()
{
	int r,c,i,j;
long long int row_min[101],k;
long long int col_max[101];

	scanf("%d%d",&r,&c);
	for(i=0;i<c;i++)
        col_max[i]=0;
    for(i=0;i<r;i++)
        row_min[i]=INT_MAX;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%lld",&a[i][j]);
			if(row_min[i]>a[i][j])
			row_min[i]=a[i][j];
		}
	}
		for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if(col_max[i]<a[j][i])
			col_max[i]=a[j][i];
		}
	}
	int flag=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==row_min[i]&&a[i][j]==col_max[j])
			{
				flag=1;
				k=a[i][j];
				break;
			}
		}
	}
	if(flag==0)
	printf("GUESS\n");
	else
	printf("%lld\n",k);
	
	
	
	
}
