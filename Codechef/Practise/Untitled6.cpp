#include<iostream>
using namespace std;
int min(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int t,n,m,z,r,l,b,sum;
	cin>>t;
	while(t--)
	{  sum=0;
		cin>>n>>m>>z>>l>>r>>b;
		if(m==1)
		{
			sum=min(n,z+l+r+b);
		}
		if(m==2)
		{
			while(l>0&&b>0&&sum<n)
			{   l--;
			    b--;
				sum+=2;
			}
			while(r>0&&b>0&&sum<2*n)
			{   r--;
			    b--;
				sum+=2;
			}
			while(l>0&&r>0&&sum<2*n)
			{   l--;
			    r--;
				sum+=2;
			}
			while(z>0&&b>0&&sum<2*n)
			{   z--;
			    b--;
				sum+=2;
			}
			sum+=min((2*n-sum)/2,b);
			sum+=min(2*n-sum,z+l+r);
		}
		if(m==3)
		{
			while(l>0&&b>0&&r>0&&sum<3*n)
			{
				l--;
				b--;
				r--;
				sum+=3;
			}
			while(l>1&&b>0&&sum<3*n)
			{
				l-=2;
				b--;
				sum+=3;
			}
			while(b>0&&r>1&&sum<3*n)
			{
				b--;
				r-=2;
				sum+=3;
			}
			while(l>1&&r>0&&sum<3*n)
			{
				l-=2;
				r--;
				sum+=3;
			}
				while(l>0&&r>1&&sum<3*n)
			{
				l--;
				r-=2;
				sum+=3;
			}
				while(b>1&&z>0&&sum<3*n)
			{
				b-=2;
				z--;
				sum+=3;
			}
			sum+=min((3*n-sum)*2/3,b);
				sum+=min(3*n-sum,z+l+r);
			
		}
		cout<<sum<<endl;
	}
}
