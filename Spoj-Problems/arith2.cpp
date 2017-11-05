#include<bits/stdc++.h>
using namespace std;
int do_s(char *p,long long int &n,char &op)
{
	n=0;
	if(p[0]<'0'||p[0]>'9')
	{
		op=p[0];
		return 0;
	}
	for(int i=0;i<strlen(p);i++)
	{
		n*=10;
		n+=(p[i]-'0');
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	char op;
//	char ch;
	char s[100];
//	scanf("%*c",&ch);
	long long int sum,i,n;
	while(t--)
	{   sum=0;
	    op='+';
	    while(scanf("%s",s)==1)
	    {
	    	if(do_s(s,n,op)==1)
	    	{
	    		switch(op)
	    		{
	    			case '+': sum+=n;break;
	    			case '-': sum-=n;break;
	    			case '*': sum*=n;break;
	    			case '/': sum/=n;break;
	    		}
	    			
	    	}
	    	else
	    	if(op=='=')
	    	{
	    		cout<<sum<<endl;
	    		break;
	    	}
	    	
	    }
		
	}
}
