# include <stdio.h>
# include <limits.h>
int e[5001][5001];
int max(int a, int b) { return (a > b)? a: b; }
void D(int n, int k)
{
    int i, j, x,res;
    for (i = 1; i <= n; i++)
    {
        e[i][1] = 1;
        e[i][0] = 0;
    }
 for (j = 1; j <= k; j++)
        e[1][j] = j;
 
     for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= k; j++)
        {
            e[i][j] = INT_MAX;
            for (x = 1; x <= j; x++)
            {
                res = 1 + max(e[i-1][x-1], e[i][j-x]);
                if (res < e[i][j])
                    e[i][j] = res;
            }}}
    //return e[n][k];
}
int main()
{
    int t,n,k;
    scanf("%d",&t);
    D(1000, 500);
    while(t--)
    {
    scanf("%d%d",&n,&k);
    printf ("%d\n",e[n][k]);
}
}
