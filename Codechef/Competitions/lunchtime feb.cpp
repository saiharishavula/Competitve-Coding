#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,count;
	cin>>a>>b>>c;
	count=(c-a)/b;
	if(count&1)
	cout<<"Unlucky Chef\n";
	else
	cout<<"Lucky Chef\n";
	
}
