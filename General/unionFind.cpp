#include<iostream>
#include<vector>
using namespace std;

class Disjoint{
public:
    int n;
    vector<int> par;
    vector<int> rank;

    Disjoint(int n){
        this -> n = n;
        for(int i=0; i<n; i++){
            par.push_back(i);
            rank.push_back(0);
        }
    }

    //to findPar parnet
    int findPar(int x){
        if(par[x] == x){
            return x;
        }

        return par[x] = findPar(par[x]); // path compression
    }

    void unionByRank(int u, int v){
        int parU = findPar(u); // findPar parents first
        int parV = findPar(v);

        //rank check
        if (parU == parV){
            return; // already connected
        } 

        if(rank[parU] == rank[parV]){
           par[parV] = parU;
           rank[parU]++; //increase the root
        }
        
        else if(rank[parU] > rank[parV]){
            par[parV] = parU;
        }

        else{
            par[parU] = parV;
    }
}
};

int main() 
{

    Disjoint dj(6);


    dj.unionByRank(0,2);
    cout<< dj.findPar(2)<<endl;

    dj.unionByRank(1,3);
    dj.unionByRank(2,5);
    dj.unionByRank(0,3);
    cout<< dj.findPar(2)<<endl;
    dj.unionByRank(0,4);


   
    return 0;
}
