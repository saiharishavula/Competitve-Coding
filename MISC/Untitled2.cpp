#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
string s[1001];
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	cin.sync_with_stdio(false);
	int t,n,i,flag,k,j;
	cin>>t;
	while(t--)
	{
     //int n,i;
     flag=0;
	cin>>n;
	int a[n+1][n+1];
	memset(a,0,sizeof a);
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			int p=0;
                k=s[j][i]=='P'?1:0;
                if(j-2>=0&&i+1<n) p=max(p,a[j-2][i+1]);
                if(j-1>=0&&i+2<n) p=max(p,a[j-1][i+2]);
                if(j+1<n&&i+2<n)  p=max(p,a[j+1][i+2]);
                if(j+2<n&&i+1<n)  p=max(p,a[j+2][i+1]);
                a[j][i]=p+k;
			if(s[j][i]=='K')
			{
				flag=1;
				cout<<a[j][i]<<endl;
				break;
			}
		
		}
		if(flag==1)
		break;
	}
	}

	
	
	
}
