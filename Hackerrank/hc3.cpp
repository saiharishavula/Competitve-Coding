#include <cmath>
#include <iostream>
#include <algorithm>
int a[1001];
int b[1001];
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	int t,m,n,r1,r2;
	long int sum;
	cin>>t;
	while(t--)
	{  r1=0;r2=0;
		sum=0;
		cin>>m>>n;
		cin>>a[1]>>b[1];
		r1=b[1];
		sum+=abs(b[1]-a[1]);
	for(int i=2;i<=n;i++)
	{
	cin>>a[i]>>b[i];
	if(r2==0)
	r2=a[i];
	if(abs(r1-a[i])<=abs(r2-a[i]))
	{
		sum+=abs(r1-a[i])+abs(a[i]-b[i]);
		if(r2==a[i])
		r2=0;
		r1=b[i];
	}
	else
	{
		sum+=abs(r2-a[i])+abs(a[i]-b[i]);
		r2=b[i];
	}
   }
	cout<<sum<<endl;
		
		
	} 
    

}

