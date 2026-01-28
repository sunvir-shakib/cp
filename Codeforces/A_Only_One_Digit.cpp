#include<iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n; 
        cin>>n; 
        // int z = n;

        int x = INT_MAX;
        while(n>0){
            int z = n%10; //last digit
            x = min(x, z);
            n = n/10;
        }

        cout<<x<<endl;
    }

    


    return 0;
}