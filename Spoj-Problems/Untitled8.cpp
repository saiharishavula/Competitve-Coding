#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
char s1[19],s2[2],s3[19],s4[2],s5[19];
int con(char s[])
{
	int k=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(!isdigit(s[i]))
		return -1;
		k=k*10+(s[i]-'0');
	}
	return k;
}
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%s%s%s%s%s",s1,s2,s3,s4,s5);
	//cin>>s1>>s2>>s3>>s4>>s5; 
	a=con(s1);
	b=con(s3);
	c=con(s5);
	if(a<0)
	a=c-b;
	if(b<0)
	b=c-a;
	if(c<0)
	c=a+b;
	cout<<a<<" + "<<b<<" = "<<c<<endl; 
/*	printf("%d",a);
	printf(" + ");
	printf("%d",b);
	printf(" = ");
	printf("%d",c);
	printf("\n");*/
}
	
}
