#include<bits/stdc++.h>
using namespace std;
#define R 5
#define C 5

/*Given a matrix of NxM.
Now consider a submatrix in it having top-left coordinates as (x1,y1) and bottom right coordinates as (x2,y2).
Now many queries are performed in which (x1,y1) & (x2,y2) are entered.
We have to find the sum of elements in this sub-matrix in O(1) time complexity for each query.*/
void solveDP(int arr[][C])
{
    int tab[R+1][C+1]={0};

    for(int i=1; i<=R; i++)
    {
        for(int j=1; j<=C; j++)
        {
            tab[i][j] = arr[i-1][j-1];
        }
    }

    for(int i=1; i<=R; i++)
    {
        for(int j=1; j<=C; j++)
        {
            tab[i][j] += tab[i-1][j] + tab[i][j-1] - tab[i-1][j-1];
        }
    }

   /* for(int i=1; i<=R; i++)
    {
        for(int j=1; j<=C; j++)
        {
            printf("%-3d ", tab[i][j]);
        }
        printf("\n");
    }*/

    while(1)
    {
        int a, b, x, y;

        scanf("%d%d%d%d", &a,&b,&x,&y);

        if(a < 0 || b < 0 || x < 0 || y < 0)
            break;

        int ans = tab[x+1][y+1] - (tab[a][y+1] + tab[x+1][b]) + tab[a][b];
        printf("Ans: %d\n", ans);
    }

}

int main()
{
    int arr[R][C] = {{1, 2, -1, -4, -20},
                       {-8, -3, 4, 2, 1},
                       {3, 8, 10, 1, 3},
                       {-4, -1, 1, 7, -6}
                      };
    solveDP(arr);


    return 0;
}
