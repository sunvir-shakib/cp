#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;

        int arA[n];
        int arB[n];
        int count = 0;

        for(int i=0; i<n; i++){
            cin>>arA[i];    
        }

        for(int i=0; i<n; i++){
            cin>>arB[i];
        }

        for(int i=0; i<n; i++){
            if(arA[i] > arB[i]){
                count += arA[i] - arB[i];
            }
        }

        cout<<count+1<<endl;

    }

    return 0;
}