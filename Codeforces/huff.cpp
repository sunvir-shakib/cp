#include<iostream>
#include<vector>
#include<algorithm> // for sort function
using namespace std;

// Graph class for Kruskal's MST
class Graph{
public:
    int V; // Number of vertices
    vector<pair<int, pair<int,int>>> edges; // {weight, {u, v}}
    vector<int> par;   // parent array for Union-Find
    vector<int> rank;  // rank array for Union-Find

    // Constructor: initialize parent and rank arrays
    Graph(int V){
        this->V = V;
        par.resize(V);
        rank.resize(V, 0);
        for(int i=0; i<V; i++) par[i] = i;
    }

    // Find parent with path compression
    int find(int x){
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }

    // Union by rank
    void unionByRank(int u, int v){
        if(rank[u] > rank[v]) par[v] = u;
        else if(rank[u] < rank[v]) par[u] = v;
        else {
            par[v] = u;
            rank[u]++;
        }
    }

    // Kruskal's algorithm to find Minimum Spanning Tree
    void kruskal(){
        sort(edges.begin(), edges.end()); // Sort edges by weight
        int minCost = 0;

        for(auto e : edges){
            int w = e.first;
            int u = e.second.first;
            int v = e.second.second;

            int parU = find(u);
            int parV = find(v);

            if(parU != parV){ // if adding edge doesn't form cycle
                unionByRank(parU, parV);
                minCost += w;
            }
        }

        // Output the total cost of the MST
        cout << "Minimum cost of the spanning tree: " << minCost << endl;
    }

    // Add an edge to the graph
    void addEdge(int w, int u, int v){
        edges.push_back({w, {u, v}});
    }
};

int main(){
    int V, E;
    cin >> V >> E;

    Graph g(V);

    // Input edges: weight, u, v
    for(int i=0; i<E; i++){
        int w, u, v;
        cin >> w >> u >> v;
        g.addEdge(w, u, v);
    }

    // Run Kruskal's algorithm
    g.kruskal();

    return 0;
}
