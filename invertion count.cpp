#include<stdio.h>
/* good one */
long long int a[200005];
long long int b[200005];
long long int t,n,i,j,mid;
long long int merge(long long int a[],long long int start,long long int mid,long long int end)
{
	long long int x,y,l,p=0;
	x=start;
	y=mid;
	l=start;
	while((x<=mid-1)&&(y<=end))
	{
		if(a[x]<a[y])
		b[l++]=a[x++];
		else
		{
			b[l++]=a[y++];
			p+=(mid-x);
		}
	}
	while(x<=mid-1)
	{
		b[l++]=a[x++];
	}
	while(y<=end)
	{
		b[l++]=a[y++];
	}
	for(long int i=start;i<=end;i++)
	{
		a[i]=b[i];
	}
	return p;
}
long long int merge_sort(long long int a[],long long int start,long long int end)
{
	long long int count=0,mid;
	if(end>start)
	{
	
	mid=(start+end)/2;
	count=merge_sort(a,start,mid);
	count+=merge_sort(a,mid+1,end);
	count+=merge(a,start,mid+1,end);
    }
	return count;
	
}

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		printf("\n");
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		printf("%lld\n",merge_sort(a,0,n-1));
	}
}
