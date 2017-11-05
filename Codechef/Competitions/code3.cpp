#include<stdio.h>
int main()
{
	char a[]={'/','*','+','-','*','+','-','/','+','-','/','*','-','/','*','+'};
	int t,n,b[10001];
	unsigned long long int sum;
	scanf("%d",&t);
	char op;
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
		sum=b[0];
		int p=0;
		for(int i=1;i<n;i++)
		{
			op=a[p++];
			if(p==16)
			p=0;
			switch(op)
			{
				case '+':sum+=b[i];break;
				case '-':sum-=b[i];break;
				case '*':sum*=b[i];break;
				case '/':sum/=b[i];break;
			}
		}
		printf("%lld\n",sum);
	}
}
