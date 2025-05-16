#include <stdio.h>

#define V 10  
#define INF 99999 

void printMatrix(int dist[][V], int n);

void floydWarshall(int graph[][V], int n) {
    int dist[V][V];
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            dist[i][j] = graph[i][j];
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printf("Shortest distances between every pair of vertices:\n");
    printMatrix(dist, n);
}

void printMatrix(int dist[][V], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    int graph[V][V];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (use %d for INF):\n", INF);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    floydWarshall(graph, n);
    return 0;
}

/*OUTPUT
Enter number of vertices: 4
Enter adjacency matrix (use 99999 for INF):
0
8
99999
7
3
0
2
99999
5
99999
0
1
2
99999
99999
0
Shortest distances between every pair of vertices:
      0      8     10      7
      3      0      2      3
      3     11      0      1
      2     10     12      0*/
