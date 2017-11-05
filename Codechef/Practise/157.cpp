#include<stdio.h>
int min(int x,int y)
{
	return x<y?x:y;
}
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int t,h,m,c;
	scanf("%d",&t);
	while(t--)
	{c=0;
		scanf("%d%d",&h,&m);
		if(h<=11&&m<=11)
		{
				c=min(h,m);
				if(c==11)
				c--;
		}
	
		else
		if(h>11&&m>11)
		{
			c=10;
			if(h%11)
			c+=h/11;
			else
			c+=h/11-1;
			if(m%11)
			c+=m/11;
			else
			c+=m/11-1;
			if(min(h,m)%11)
			c+=min(h/11,m/11);
			else
			c+=min(h/11,m/11)-1;
			
		}
		else
		{
			c+=min(h,m);
			if(c==11)
			c--;
			if(max(h,m)%11)
			c+=min(min(h,m)-1,max(h,m)/11);
			else
			c+=min(min(h,m)-1,max(h,m)/11-1);
			  
		}
		printf("%d\n",c);
	}
}
