#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int a[100001],n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		if(n==1)
		cout<<"1"<<endl;
		else
		cout<<"2"<<endl;
		
	}
}
