#include<iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
string s[16];
int a[300];
bool my(int x,int y)
{
	return x>y;
}
int main()
{
	cin.sync_with_stdio(false);
	int n,m,i,j,k=0,final=1,c,t1,t2,t3,t4;
	a[0]=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	  cin>>s[i];
	}
	for(i=1;i<m-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(s[j][i]=='G')
			{
				t1=j-1;
				t3=j+1;
				t2=i+1;
				t4=i-1;
				c=0;
				while((t1>=0)&&(t3<=n-1)&&(t2<=m-1)&&(t4>=0))
				{
					if((s[j][t2]=='G')&&(s[j][t4]=='G')&&(s[t1][i]=='G')&&(s[t3][i]=='G'))
					c++;
					else
					break;
					t1--;
					t2++;
					t3++;
					t4--;
				}
			
			if(c)
			a[++k]=c;
		}
		}
	}
	sort(a,a+k+1);
//	for(i=0;i<=k;i++)
//	cout<<a[i]<<" ";
//	cout<<endl;
	if(k)
	cout<<(4*a[k]+1)*(4*a[k-1]+1);
	else
	cout<<"1";
	
	
}
