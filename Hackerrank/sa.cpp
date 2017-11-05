#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[1001];
	int c=0,k,final=0;
	//	printf("k");
    while((scanf("%s",a))!=EOF)
	{
		k=strlen(a);
	//	cout<<"k";
		c=0;
		for(int i=0;i<k;i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
			c++;
		}
		if(k==c&&k!=1)
		final++;
	}

	cout<<final<<endl;
}
