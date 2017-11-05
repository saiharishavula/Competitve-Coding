#include<bits/stdc++.h>
using namespace std;
//int i;
typedef long long int64;
vector <long long int> a;
int t,f,t1;
long long int b,temp,j;
long long int p;
//const long long MAX_VALUE = long long(1e10);
const int64 MAX_VALUE = int64(1e10);
int main()
{
	for(int i=1;1LL*i*i<=MAX_VALUE;++i)
	{
		temp=1LL*i*i;
	//	j=temp;
			   f=2;
				while(temp)
				{
					t1=temp%10;
					temp/=10;
					if(t1!=0&&t1!=1&&t1!=4&&t1!=9)
					{
						f=1;
						break;
					}
				}
			
			if(f==2)
			{
			a.push_back(1LL*i*i);
		}
}
	scanf("%d",&t);
	//solve();
	while(t--)
	{   //c=0;
		scanf("%lld%lld",&p,&b);
		  
	//	printf("%lld\n",upper_bound(a.begin(), a.end(), b)-lower_bound(a.begin(), a.end(), p));
		cout
				<< upper_bound(a.begin(), a.end(), b)
						- lower_bound(a.begin(), a.end(), p) << endl; 
		
	}
}
	
