#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph {
    int V; // number of vertices
    list<int> *adj; // adjacency list

    void DFSUtil(int v, vector<bool> &visited) {
        // Mark the current node as visited and print it
        visited[v] = true;
        cout << v << " ";

        // Recur for all the vertices adjacent to this vertex
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited);
    }

public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v’s list.
    }

    void DFS(int v) {
        // Mark all the vertices as not visited
        vector<bool> visited(V, false);

        // Call the recursive helper function to print DFS traversal
        DFSUtil(v, visited);
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);

    return 0;
}
