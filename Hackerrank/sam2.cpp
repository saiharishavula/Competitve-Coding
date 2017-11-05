#include<stdio.h>
//int a[100001];
int main()
{
	int t,i,p,b,k;
	long int sum=0;
	k=1;
	int a[100001];
	a[0]=0;
		for(i=1;i<=100000;i++)
		{
			if(i%4==1)
			a[k++]=1;
			if(i%4==2)
			{
			a[k++]=(i+1);
			continue;	
			}
			
			if(i%4==3)
			{
			a[k++]=0;	
			continue;
			}
			if(i%4==0)
			{
			a[k++]=i;
			continue;	
			}
			
			
		//	k++;
		}
	//	for(i=0;i<10;i++)
	//	printf("%d ",a[i]);
	scanf("%d",&t);
	while(t--)
	{   sum=0;
		scanf("%d%d",&p,&b);
	     for(i=p;i<=b;i++)
	     {
	   // printf("%d ",a[i]);
	     sum^=a[i];
	 }
		printf("%ld\n",sum);
		
	}
}
