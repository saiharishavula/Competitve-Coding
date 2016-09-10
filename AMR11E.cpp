#include<stdio.h>
#include<math.h>
#define M 10000
int main()
{
    int a[10000]={0};
    int i,j;
    for(i=2;i<=M;i++)
    {
        if(a[i]==0)
        {
            for(j=i+i;j<=M;j++)
            {
                if(j%i==0)
                    a[j]++;
            }
            a[i]++;

        }
    }
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=2;i<=M;i++)
        {
            if(a[i]>=3)
                n--;
            if(n==0)
            {
                printf("%d\n",i);
                break;
            }

        }

    }

}
