#include <stdio.h>
#define MAX_VERTICES 100   
void genAdjMat(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int numVertices, int numEdges) {
    int i, j;
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }
    for (i = 0; i < numEdges; i++) {
        int src, dest;
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        adjMatrix[src][dest] = 1;  // Set matrix[src][dest] = 1 to indicate an edge from src to dest
        adjMatrix[dest][src] = 1;  // For an undirected graph, set matrix[dest][src] = 1 as well
    }
    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}
void main() {
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
    int numVertices, numEdges;
clrscr();
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    genAdjMat(adjMatrix, numVertices, numEdges);
   getch();
}