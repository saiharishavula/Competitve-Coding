#include<iostream>
#include<climits>
using namespace std;
int s[201][201];
int main()
{
    cin.sync_with_stdio(false);
    int a,b,q,n,m,i,j,x,y,mini,temp,temp_max,temp_sum;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>s[i][j];
    cin>>q;
    while(q--)
    {
        mini=INT_MAX;
        cin>>a>>b;

        for(i=1;i<=n-a+1;i++)
        {
            for(j=1;j<=m-b+1;j++)
            {
                temp_max=0;
                temp=0;
                temp_sum=0;
                for(x=i;x<=i+a-1;x++)
                {
                    for(y=j;y<=j+b-1;y++)
                    {
                        temp_sum+=s[x][y];
                        if(s[x][y]>=temp_max)
                        {
                            temp_max=s[x][y];
                        }
                    }
                }
                temp=(a*b*temp_max)-temp_sum;
                if(mini>=temp)
                    mini=temp;

            }
        }
        cout<<mini<<endl;

    }



}
