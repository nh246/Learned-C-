#include <stdio.h>
#include <stdbool.h>

#define V 4 // Number of vertices

// Function to check if it is safe to color the vertex with color c
bool isSafe(int v, bool graph[V][V], int color[], int c) {
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && c == color[i]) {
            return false;
        }
    }
    return true;
}

// Recursive function to assign colors to vertices
bool graphColoringUtil(bool graph[V][V], int m, int color[], int v) {
    // If all vertices are assigned a color, return true
    if (v == V) {
        return true;
    }

    // Try different colors for vertex v
    for (int c = 1; c <= m; c++) {
        // Check if assignment of color c to v is possible
        if (isSafe(v, graph, color, c)) {
            color[v] = c;

            // Recur to assign colors to rest of the vertices
            if (graphColoringUtil(graph, m, color, v + 1)) {
                return true;
            }

            // If assigning color c to v doesn't lead to a solution, remove it
            color[v] = 0;
        }
    }

    // If no color can be assigned to this vertex, return false
    return false;
}

// Function to color the graph using greedy algorithm
void graphColoring(bool graph[V][V], int m) {
    int color[V]; // Array to store color assignments

    // Initialize all vertices as uncolored
    for (int i = 0; i < V; i++) {
        color[i] = 0;
    }

    // Call the recursive helper function to color the graph
    if (graphColoringUtil(graph, m, color, 0) == false) {
        printf("Solution does not exist\n");
        return;
    }

    // Print the solution
    printf("The coloring of the graph is:\n");
    for (int i = 0; i < V; i++) {
        printf("Vertex %d: Color %d\n", i, color[i]);
    }
}

int main() {
    // Example graph represented using adjacency matrix
    bool graph[V][V] = { {0, 1, 1, 1},
                          {1, 0, 1, 0},
                          {1, 1, 0, 1},
                          {1, 0, 1, 0} };

    int m = 3; // Number of colors

    // Color the graph
    graphColoring(graph, m);

    return 0;
}
