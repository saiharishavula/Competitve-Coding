#include<iostream>
using namespace std;
//int s[100001][300];
int main()
{

int(*s)[300]=new int[100000][300];
//s=n1ew int[3][8];
	int n,q,i,k,j,a,b;
	//scanf("%d%d",&n,&q);
cin>>n>>q;	
for(i=0;i<n;i++)
	{
		//scanf("%d",&k);
    cin>>k;
		for(j=0;j<k;j++)
		{
			//scanf("%d",&s[i][j]);
            cin>>s[i][j];
		}
	}
	for(i=0;i<q;i++)
	{
		//scanf("%d%d",&a,&b);
        cin>>a>>b;
		//printf("%d\n",s[a][b]);
        cout<<s[a][b]<<endl;
	}
	
	
}

