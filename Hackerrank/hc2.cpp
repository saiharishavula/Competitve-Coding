#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long int a[300005];
vector <long long int> v[300005];
//vector <long long int> b;
long long int b[1000000001]={0};
int main()
{
	long long int c1,m,n,i,sum=0,p,c=0,j,l=0,count=1,temp;
	cin>>c1>>m>>n;
	if(n==1)
	{
		cout<<"0"<<endl;
		exit;
	}
	a[0]=0;
	a[1]=c1;
	p=2*n+2;
	for(i=2;i<p;i+=2)
	{
		a[i]=(a[i-1]+a[i-2])%m;
		a[i+1]=(a[i]+a[i-1])%m;
		v[c].push_back(a[i]);
		v[c].push_back(a[i+1]);
		c++;
		
	}
//	cout<<c<<endl;
	for(i=0;i<c-1;i++)
	{
		for(j=i+1;j<c;j++)
		{
		           
				 temp=(v[i][0]*v[j][0]+v[i][1]*v[j][1])%m;
				 b[temp]++;
		}
	}
	//sort(b.begin(),b.end());
	for(i=1;i<1000000001;i++)
	{
		//cout<<b[i]<<endl;
		if(b[i]!=0)
		count=(count+1)%m;
	}
	cout<<count%m<<endl;
	
	
	
}  

