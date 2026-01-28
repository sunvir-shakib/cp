#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int ar[n];
        int ans = INT_MIN;

        for(int i=0; i<n; i++){
            cin>>ar[i];         
        }

        for(int i=0; i<n; i++){
            ans = max(ans,ar[i]);
            }

        cout<<ans<<endl;
        
    }



    return 0;
}