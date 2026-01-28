#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;
        int ar[n];

        for(auto &x : ar)
        cin>>x;

        int z  = min(abs(s-ar[0]),abs(s-ar[n-1])) + (ar[n-1]-ar[0]) ;
        
        cout<<z<<endl;
    }

    return 0;
}