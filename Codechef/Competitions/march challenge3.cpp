#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[1000005];
int main()
{
	long long int n,i,j,k,c,m;
	int x,y,z;
	char p;
	cin>>n;
	int f,l;
	while(n--)
	{
	x=0;y=0;z=0;f=0;c=0;
		cin>>s;
		k=strlen(s);
		if(k==1)
		{
			cout<<"NO\n";
		}
		else
		if((k%2)==0)
		{
			for(i=0;i<k/2;i++)
			{
				if(s[i]!=s[k/2+i])
				{
					f=1;
					break;
				}
			}
			if(f==0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		else
		{
		   for(i=0;i<k/2;i++)
		   {
		   	if(s[i]!=s[k/2+i+1])
		   	{
		   		x=1;
		   		break;
		   	}
		   }
           l=0;i=0;j=0;
		   	while(i<=k/2)
		   {
		   	if((s[i]!=s[k/2+j+1])&&(l==0))
		   	{
		   	   l=1;
		   	   i++;
		   	}
		   	if((s[i]!=s[k/2+j+1])&&(l==1))
		   	{
		   		y=1;
		   		break;
		   	}
		   	i++;
		   	j++;
		   }
		  l=0;i=0;j=0;
		   	while(i<k/2)
		   {
		   	if((s[i]!=s[k/2+j])&&(l==0))
		   	{
		   	   l=1;
		   	   j++;
		   	}
		   	if((s[i]!=s[k/2+j])&&(l==1))
		   	{
		   		z=1;
		   		break;
		   	}
		   	i++;
		   	j++;
		   }
		   if(x==0||y==0||z==0)
		   cout<<"YES\n";
		   else
		   cout<<"NO\n";
		}

	}
		
	
	
	
}
