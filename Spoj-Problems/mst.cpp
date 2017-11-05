#include<stdio.h>
int V;
int graph[100][100];
int minKey(int *key, unsigned char *mstSet)
{
    int min = 2147483647;
    int min_index;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == 0 && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

void printMST(int parent[])
{
    int weightSum = 0;
    for (int i = 1; i < V; i++)
    {
        weightSum += graph[i][parent[i]];
    }
    printf("%d\n", weightSum);
}

void primMST()
{
     int parent[100];
     int key[100];
     unsigned char mstSet[100];

     for (int i = 0; i < V; i++)
     {
        key[i] = 2147483647;
        mstSet[i] = 0;
     }

     key[0] = 0;
     parent[0] = -1;

     for (int count = 0; count < V-1; count++)
     {
        int u = minKey(key, mstSet);

        mstSet[u] = 1;

        for (int v = 0; v < V; v++)
        {
          if (graph[u][v] && mstSet[v] == 0 && graph[u][v] <  key[v])
          {
             parent[v]  = u, key[v] = graph[u][v];
          }
        }
     }

     printMST(parent);
}

int main(void)
{
    int i, j, T;
    scanf("%d", &T);

    for (int test_case = 1; test_case <= T; test_case++)
    {
        printf("#%d ", test_case);
        scanf("%d", &V);

        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                scanf("%d", &graph[i][j]);
            }
        }

        primMST();
    }

    return 0;
}
