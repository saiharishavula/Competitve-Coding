#include<bits/stdc++.h>
using namespace std;
//int b[100001];
int main()
{   //vector <long long int> a;
	int t,n,i,k;
	long int c;
	cin>>t;
    while(t--)
    {
	    cin>>n;
	    int b[n];
	    long long int a[n];
	  //  b[0]=0;
        for(i=0;i<=n;i++)
        b[i]=0;
	    k=0;
		c=0;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<n;i++)
		{
			if(a[i]!=a[i+1]&&(b[i-1]==1))
			{
				b[i]=1;
				c+=1;
			}
			else
			if(a[i]!=a[i+1])
			{
				b[i]=1;
				c+=2;
			}
			
		
		}
		cout<<c<<endl;
		
	}
	
}
