#include<stdio.h>
void call(int a[],int n,int x)
{
int d[n],i;
for(i=0;i<n;i++)
d[i]=0;

for(i=0;i<n;i++)
{
if(d[a[i]]==1)
{
printf("%d %d\n",a[i],a[i]-x);
return;
}
else
d[x+a[i]]=1;
}
printf("no");
}
int main()
{
int a[]={5, 20, 3, 2, 50, 80};
call(a,6,78);
return(0);
}
