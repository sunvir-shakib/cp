#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int ans = 0;
        while(n>9){
                ans += 9;
                n = n/10;
            }

        ans += n;
        cout<<ans<<endl;
    }

    return 0;
}