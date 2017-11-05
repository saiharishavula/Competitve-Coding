#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
	long long int n,a,i,k=0,l=0,min=INT_MAX,j;
	char s[10];
	scanf("%11d",&n);
	long long int p[n+1];
   for(i=1;i<=n;i++)
	{   
	
	   scanf("%s",&s);
	    if(s=="PUSH")
		scanf("%11d",&a);
		if(s=="PUSH")
		p[k++]=a;
		if(s=="POP")
			{
				printf("%11d",p[l]);
					printf("\n");
				l++;
			}
		if(s=="MIN")
		{
			printf("%d",*min_element(p+l,p+k));
				printf("\n");
		}
	}
	
}
