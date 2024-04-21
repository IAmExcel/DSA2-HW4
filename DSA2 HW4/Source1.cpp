#include <iostream>
#include <queue> 
#include <vector> 

using namespace std;

struct Edge {
    int to, weight;
};

class Graph {
    int V; 
    vector<vector<Edge>> adj; 

public:
    Graph(int V) : V(V), adj(V) {}

    void addEdge(int u, int v, int w) {
        adj[u].push_back({ v, w });
    }

    void dijkstra(int src) {
        vector<int> dist(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[src] = 0;
        pq.push({ 0, src }); 

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (const auto& edge : adj[u]) {
                int v = edge.to;
                int weight = edge.weight;
                if (dist[v] > dist[u] + weight) {
                    dist[v] = dist[u] + weight;
                    pq.push({ dist[v], v });
                }
            }
        }

        
        cout << "Vertex Distance from Source\n";
        for (int i = 0; i < V; ++i) {
            cout << i << "\t\t" << dist[i] << "\n";
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 2);
    g.addEdge(2, 1, 4);
    g.addEdge(2, 3, 8);
    g.addEdge(2, 4, 2);
    g.addEdge(3, 4, 7);
    g.addEdge(4, 3, 9);

    g.dijkstra(0);

    return 0;
}
