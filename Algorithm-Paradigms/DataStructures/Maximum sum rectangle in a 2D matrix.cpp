#include<iostream>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;
#define ROW 4
#define COL 5
int perform_kadane_algo(int temp[],int *up,int *down)
{
    int max_so_far = -100000, max_ending_here = -100000;

    for (int i = 0; i < ROW; i++)
    {
        max_ending_here = max(max_ending_here + temp[i],temp[i]);
        if(max_ending_here == temp[i])
            *up = i;

        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            *down = i;
        }
    }
    return max_so_far;
}
void findMaxSum(int a[ROW][COL])
{
    int i,j,k,final_max=INT_MIN,temp_max,up,left,right,down,temp_up,temp_down;
    int temp[ROW+1];
    for(i=0;i<COL;i++)
    {
        memset(temp,0,sizeof(temp));
        for(j=i;j<COL;j++)
        {
            for(k=0;k<ROW;k++)
                temp[k]+=a[k][j];
            temp_max = perform_kadane_algo(temp,&temp_up,&temp_down);
            if(final_max<=temp_max)
            {
                final_max = temp_max;
                left = i;
                right = j;
                up = temp_up;
                down = temp_down;
            }
        }
    }
    cout<<left<<" "<<right<<endl;
    cout<<up<<" "<<down<<endl;
    cout<<final_max;

}
int main()
{
    int M[ROW][COL] = {{1, 2, -1, -4, -20},
                       {-8, -3, 4, 2, 1},
                       {3, 8, 10, 1, 3},
                       {-4, -1, 1, 7, -6}
                      };

    findMaxSum(M);

    return 0;
}
