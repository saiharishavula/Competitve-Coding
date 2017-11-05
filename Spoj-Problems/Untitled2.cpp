#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[101][201];
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>a[j];
		for(int i=0;i<strlen(a[j])/2;i+=2)
		cout<<a[j][i];
		cout<<endl;
		
	}
}
