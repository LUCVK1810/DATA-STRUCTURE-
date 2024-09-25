#include <stdio.h>
#include <limits.h>
#define MAX_VERTICES 100
#define INF INT_MAX
int minDistance(int dist[], int sptSet[], int numVertices) {
    int min = INF, minIndex;
    for (int v = 0; v < numVertices; v++)
        if (sptSet[v] == 0 && dist[v] <= min)
            min = dist[v], minIndex = v;
    return minIndex;
}
void printSol(int dist[], int numVertices) {
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < numVertices; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}
void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int src, int numVertices) {
    int dist[MAX_VERTICES];  
    int sptSet[MAX_VERTICES];
    for (int i = 0; i < numVertices; i++)
        dist[i] = INF, sptSet[i] = 0;
    dist[src] = 0;
    for (int count = 0; count < numVertices - 1; count++) {
        int u = minDistance(dist, sptSet, numVertices);
        sptSet[u] = 1;
        for (int v = 0; v < numVertices; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    printSol(dist, numVertices);
}
int main() {
    int graph[MAX_VERTICES][MAX_VERTICES], numVertices;
    clrscr();
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    printf("Enter the adjacency matrix (use 0 for no direct edge):\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 0 && i != j) {
                graph[i][j] = INF; // Set INF for no direct edge between vertices
            }
        }
    }
    int src;
    printf("Enter the source vertex: ");
    scanf("%d", &src);
    dijkstra(graph, src, numVertices);
   getch();
}