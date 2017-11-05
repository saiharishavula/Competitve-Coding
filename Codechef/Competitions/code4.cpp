#include<bits/stdc++.h>
using namespace std;
char a[100001],b[100001],p[100001];
int h[100001];
int main(){
	int t,n,m,k,i,j,c,l,f,x;
	scanf("%d",&t);
	while(t--)
	{   c=0;
	f=0;
       l=0;
       memset(h,0,sizeof(h));
		scanf("%d%d%d",&n,&m,&k);
		scanf("%s",a);
		scanf("%s",b);
		for(i=0;i<k;i++)
		p[i]=b[i];
		for(i=0;i<n;i++)
		{   l=0;
		    j=i;
		    c=0;
			while(j<n)
			{   if(l==0)
			    x=j;
				if(a[j]==p[l])
				{
					l++;
					if(l==k&&h[x]!=1)
					{
						c++;
						l=0;
						h[x]=1;	
					}
					else
					if(l==k)
					l=0;
				
				}
				j++;
			}
			//if(f<c)
			f+=c;
		}
		if(f>=k)
		printf("%d\n",f);
		else
		printf("-1\n");
		
	}
}
