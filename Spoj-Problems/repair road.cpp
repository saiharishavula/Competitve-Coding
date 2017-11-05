#include<stdio.h>
//using namespace std;
int a[10005];
int main()
{
    int t,n,i,maxi,c1,c2,j,k;
    scanf("%d",&t);
    while(t--)
    { maxi=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            c1=0;
            c2=0;
            for(j=i;j<n;j++)
            {
                if(a[j]==0&&c1>=k)
                    break;
                if(a[j]==0)
                {
                    c1++;
                    c2++;

                }
                else
                    c2++;
            }
            if(c2>maxi)
                maxi=c2;
        }
       printf("%d\n",maxi);
    }
}
