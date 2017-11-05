#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
return a<b?a:b;
}
int main()
{
	int n1,n2,t;
	scanf("%d",&t);
	while(t--){
    char a[10001],b[10001];
	scanf("%s",a);
	scanf("%s",b);
	n1 = strlen(a);
	n2 = strlen(b);
	int c1[256]={0},c2[256]={0},c=0,i;
	for(i = 0; i < n1; i++)
	c1[a[i]]++;
	for(i = 0; i < n2; i++)
	c2[b[i]]++;
	for(i = 0; i < 256;i++)
	{
		if(c1[i] != c2[i])
		c = c+min(c1[i],c2[i]);
		else
		c= c+c1[i];
	}
	printf("%d\n",c);
    }  
	return 0;	
} 
