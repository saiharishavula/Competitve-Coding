#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,l=1;
    scanf("%d",&t);
    while(t--)
    {
        int i,tar,ppl;
        scanf("%d%d",&tar,&ppl);
        int arr[ppl];
        for(i=0;i<ppl;i++)
             scanf("%d",&arr[i]);
        sort(arr,arr+ppl);
        int sum=0;
        for(i=ppl-1;i>=0;i--)
        {
            sum+=arr[i];
            if(sum>=tar)
                break;
        }
        printf("Scenario #%d:\n",l++);
        if(sum>=tar)
            printf("%d\n",i);
        else
            printf("impossible\n");
    }
    return 0;
}
