#include<stdio.h>
#include<string.h>
char s[201];
char a[201][201];
int main()
{
	  int t,i,k,j;
	  while(1){
	  	scanf("%d",&t);
	  	if(t==0)
	  	break;
	  	scanf("%s",s);
	  	k=strlen(s);
	  	k=k/t;
	  	int p=0;
	  	for(i=0;i<k;i++)
	  	{
	  		if((i&1)==0)
	  		{
	  			for(j=0;j<t;j++)
	  			a[i][j]=s[p++];
	  		}
	  		else
	  		{
	  		
	  			for(j=t-1;j>=0;j--)
	  			a[i][j]=s[p++];
	  		
	  		}
	  	}
	 /*	for(i=0;i<k;i++)
	  	{
	  		for(j=0;j<t;j++)
	  		printf("%c",a[i][j]);
	  		printf("\n");
	  	}*/
	  	
	  	for(i=0;i<t;i++)
	  	{
	  		for(j=0;j<k;j++)
	  		printf("%c",a[j][i]);
	  	}
	  	printf("\n");
	  	
	  }
}
