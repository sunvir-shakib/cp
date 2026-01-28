#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Edge{
public:
    int u,v,w;
    Edge(int u, int v, int w){
        this -> u = u;
        this -> v = v;
        this -> w = w;
    }
};

class Graph{
public:
    int V;
    vector<Edge> edges;
    vector<int>par, rank;

    Graph(int V){
        this -> V = V;
        // par.resize(V);
        // rank.resize(V);
        
        for(int i = 0; i<V; i++){
            par[i] = i;
            rank[i] = 0;   //      
        }
    }

    int find(int x){ //2nd call
        if(par[x] == x){
            return x;
        }

        return par[x] = find(par[x]); //path compresssion
    }

    void unionByRank(int u, int v){ //3rd call
        int parU = find(u);
        int parV = find(v);

        if(rank[parU] == rank[parV]){
            par[parU] = parV;
            rank[parV]++;
        }

        else if((rank[parU] > rank[parV])){
            par[parV] = parU;
        }

        else{
                par[parU] = parV;

    }
}


    void kruskel(){
    sort(edges.begin(), edges.end(), [](Edge &a, Edge &b){ return a.w < b.w; });
    
    int minCost = 0;
    
    for(int i=0; i<edges.size(); i++){
        Edge e = edges[i];
        
        int parU = find(e.u);
        int parV = find(e.v);
        
        if(parU != parV){
            unionByRank(e.u, e.v);  // Pass original vertices, not their parents
            minCost = minCost + e.w;
        }
    }
    cout<<minCost<<endl; 
}

    void addEdge(int u, int v, int w){
        edges.push_back(Edge(u,v,w));
    }
};

int main() 
{
    int V, E;
    cin>>V>>E;
    Graph g(V);
    
    for(int i=0; i<E; i++){
        int u,v,w;
        cin>> u >> v>> w;
        g.addEdge(u,v,w);
    }
    g.kruskel();
   
    return 0;
}
