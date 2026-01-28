#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Graph{
public:
    int V;

    vector<pair<int, pair<int,int>>> edges;
    vector<int> par;
    vector<int> rank;

    Graph(int V){
        this -> V = V;

        par.resize(V);
        rank.resize(V);

        for(int i=0; i<V; i++){
            par[i] = i;
            rank[i] = 0;
        }
    }

    int find(int x){
        if(par[x] == x){
            return x;
        }
        return par[x] = find(par[x]);
    }


    void unionByRank(int parU, int parV){

        if(rank[parU] > rank[parV]){
            par[parV] = parU; 
        }

        else if(rank[parU] < rank[parV]){
            par[parU] = parV; 
        }

        else{
            par[parV] = parU;
            rank[parU]++;
        }  
    }

    void kruskal(){
        sort(edges.begin(), edges.end()); //3rd 
        int minCost = 0;

        for(auto e : edges){
            int w = e.first;
            int u = e.second.first;
            int v = e.second.second;

            int parU = find(u); //4th find parents
            int parV = find(v);

            if( parU != parV){
                unionByRank(parU, parV); //5th--union
                minCost+= w;
            }
        }
        cout<<minCost<<endl;
    }

    void addEdge(int w, int u, int v){
        edges.push_back({w, {u,v}});
    }
};

int main() 
{
    int V,E;
    cin>>V>>E;

    Graph g(V);

    for(int i=0; i<E; i++){
        int w, u, v;
        cin>>w>>u>>v;
        g.addEdge(w, u, v); //1st call
    }

    g.kruskal(); //2nd call
   
    return 0;
}
