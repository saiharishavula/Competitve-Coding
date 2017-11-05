#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,i,j,f,p,k,l;
	scanf("%d",&t);
	char a[40001],b[40001],c[40001];
	while(t--)
	{ f=1; 
	 scanf("%s",&a);
	    scanf("%s",&b);
		scanf("%d",&n);
		int x[26]={0};
	//	int y[26]={0};
	    p=strlen(a);
	    k=strlen(b);
	
		for(i=0;i<p;i++)
		x[a[i]-97]++;
		for(i=0;i<k;i++)
		x[b[i]-97]++;
		for(i=0;i<n;i++)
		{
			scanf("%s",&c);
			l=strlen(c);
			for(j=0;j<l;j++)
			{
				x[c[j]-97]--;
				if(x[c[j]-97]<0)
				{
					f=0;
					break;
				}
			}
		}
		if(f==1)
		printf("YES\n");
		else
		printf("NO\n");
		
		
		
	}
	
}
