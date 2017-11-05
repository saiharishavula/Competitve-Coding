#include <iostream>
using namespace std;

int main() {
	int x,y,n,d,c;
	
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
	if(x%2==0)
	{
		if(x==2)
		cout<<2<<endl;
		else
		c=x+1;
	}
	else
	{
	if(x==1)
	{
	cout<<2<<endl;
	c=x;}
	else
	c=x;
}
	for(int i=c;i<=y;i+=2)
	{   d=3;
	   for(int k=3;k<i;k=k+2)
			{ 
				if((i%k)==0)
				break;
				else
				d+=2;
			}
			if(d==i)
			cout<<i<<endl;
		}
		cout<<endl;
	}

	return 0;
}
