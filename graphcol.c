#include <stdio.h>
#include <stdbool.h>

#define V 4 // Number of vertices in the graph

void printSolution(int color[]);

// A utility function to check if the current color assignment is safe for vertex v
bool isSafe(int v, bool graph[V][V], int color[], int c) {
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return false;
    return true;
}

// A recursive utility function to solve m coloring problem
bool graphColoringUtil(bool graph[V][V], int m, int color[], int v) {
    // Base case: If all vertices are assigned a color, then return true
    if (v == V)
        return true;

    // Consider this vertex v and try different colors
    for (int c = 1; c <= m; c++) {
        // Check if assignment of color c to v is valid
        if (isSafe(v, graph, color, c)) {
            color[v] = c;

            // Recur to assign colors to rest of the vertices
            if (graphColoringUtil(graph, m, color, v + 1))
                return true;

            // If assigning color c doesn't lead to a solution then remove it
            color[v] = 0;
        }
    }

    // If no color can be assigned to this vertex then return false
    return false;
}

// This function solves the m Coloring problem using Backtracking.
void graphColoring(bool graph[V][V], int m) {
    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = 0;

    // Call graphColoringUtil() for vertex 0
    if (!graphColoringUtil(graph, m, color, 0))
        printf("Solution does not exist");
    else
        printSolution(color);
}

// A utility function to print solution
void printSolution(int color[]) {
    printf("Solution Exists:"
           " Following are the assigned colors \n");
    for (int i = 0; i < V; i++)
        printf(" %d ", color[i]);
    printf("\n");
}

// Driver program to test above functions
int main() {
    bool graph[V][V] = {{0, 1, 1, 1},
                        {1, 0, 1, 0},
                        {1, 1, 0, 1},
                        {1, 0, 1, 0}};
    int m = 3; // Number of colors
    graphColoring(graph, m);
    return 0;
}
