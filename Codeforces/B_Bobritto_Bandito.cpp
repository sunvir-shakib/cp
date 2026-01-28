#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m, l,r;
        cin>>n>>m>>l>>r;

        if(m <= r){
            cout<< 0<<" "<<m<<endl;
            continue;
        }

        if(m > r){
            cout<< r-m <<" "<< r<<endl;
        }
    }


    return 0;
}