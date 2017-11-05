#include<stdio.h>
//#include<algorithm>
//using namespace std;
long long int a[100005];
int b[100005];
int main()
{
	//cin.sync_with_stdio(false)
	int t,n,i,j;
	scanf("%lld",&t);
	int f,f1,c=0;
	while(t--)
	{
		f1=0;
	scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			c=1;
			f1=0;
			if(a[i]>0)
			f=1;
			else
			f=0;
			for(j=i+1;j<n;j++)
			{
				if(f==1)
				{
					if(a[j]<0)
					{
					
					f=0;
					c++;
				}
					else
					{
						f1=1;
					}
				}
			    else
				{
					if(a[j]>0)
					{
					
					f=1;
					c++;
				}
					else
					{
						f1=1;
					}
				}
				if(f1==1)
				break;
				
			}
			printf("%lld ",c);
		}
	
		printf("\n");
		
	}
	
} 
