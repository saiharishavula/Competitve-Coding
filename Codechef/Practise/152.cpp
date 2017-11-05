#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000001],b[1000001];
	long long int i,j1,j2,x,y,c1,c2,l;
	scanf("%s%s",&a,&b);
	x=strlen(a);
	y=strlen(b);
	l=0;
	for(i=0;i<x;i++)
	{
		if(a[i]!='0')
		{
			c1=x-l;
			j1=i;
			break;
		}
		else
		l++;
	}
	l=0;
	for(i=0;i<y;i++)
	{
		if(b[i]!='0')
		{
			c2=y-l;
			j2=i;
			break;
		}
		else
		l++;
	}
//	printf("%d %d\n",c1,c2);
	if(c1>c2)
	printf(">\n");
	if(c1<c2)
	printf("<\n");
	if(c1==c2)
	{  // printf("k");
	    int flag=0;
		while(j1!=x)
		{
			if(a[j1]>b[j2])
			{
			printf(">\n");
			flag=1;
			break;	
			}
        	if(a[j1]<b[j2])
        	{
        	 printf("<\n");
			 flag=1;	
        	 break;
        	}
        	if(a[j1]==b[j2])
        	{
        		j1++;
        		j2++;
        	}
	        
		}
		if(flag==0)
		printf("=\n");
	}
	
}
