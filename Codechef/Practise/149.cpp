#include<iostream>
using namespace std;
//#include<climits>
int main()
{
	int n,m,i,j;
	long int a[109][109],max,final;
//	scanf("%d%d",&n,&m);
	cin>>n>>m;
	final=0;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		cin>>a[i][j];
	}
	for(i=0;i<m;i++)
	{   max=a[0][i];
		for(j=0;j<n;j++)
		{
			if(max>a[j][i])
			max=a[j][i];
		}
		if(final<max)
		{
			final=max;
			//ind=i;
		}
	}
	cout<<final<<endl;
}
