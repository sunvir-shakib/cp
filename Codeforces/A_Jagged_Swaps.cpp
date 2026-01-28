#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }

        if(ar[0] == 1){
            cout<<"YES"<<endl;
        }

            else{
                cout<<"NO"<<endl;
            }
    }
   
    return 0;
}
