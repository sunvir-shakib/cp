#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;f
    while(t--){
        int n;
        cin>>n;

        vector<int> ar(n);
        vector<int> arB;
        for(auto &x : ar){
            cin>>x;
            arB.push_back((n+1)-x);
        }

        for(int i: arB){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}