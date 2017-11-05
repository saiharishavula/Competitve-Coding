#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX;
// s - destination
// reverse the direction of given input edges and do dijkstra from destination
// this can be done by warshalls algo even of o(n^3) complexity
struct edge {
    int v;
    int w;
};
void dijkstra( vector< edge > graph[], int dist[], int S,int N ) {
    int i;
    for ( i = 0; i <= N; ++i ) {
        dist[ i ] = INF;
    }
    queue< edge > q;
    q.push( ( edge ) { S, 0 } );
    dist[ S ] = 0;
    while ( !q.empty() ) {
        edge p = q.front();
        q.pop();
        for ( i = 0; i < graph[ p.v ].size(); ++i ) {
            edge k = graph[ p.v ][ i ];
            if ( dist[ p.v ] + k.w < dist[ k.v ] ) {
                dist[ k.v ] = dist[ p.v ] + k.w;
                q.push( k );
            }
        }
    }
}

int main() {

    int N, S, T, M, u, v, w;
    scanf( "%d%d%d%d", &N, &S, &T, &M );
    vector< edge > graph[ N + 1 ];
    int dist[ N + 1 ], count = 0, i;
    for ( i = 0; i < M; ++i ) {
        scanf( "%d%d%d", &u, &v, &w );
        graph[ v ].push_back( ( edge ) { u, w } );
    }
    dijkstra( graph, dist, S, N );
    for ( i = 1; i <= N; ++i ) {
        if ( dist[i] <= T ) {
            ++count;
        }
    }
    printf( "%d\n", count );

    return 0;
}
