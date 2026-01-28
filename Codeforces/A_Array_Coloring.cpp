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

        int oddCount = 0;
        for(int i=0; i<n; i++){
            if(ar[i]%2 != 0){
                oddCount++;
            }
        }

        if(oddCount % 2 == 0){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

    }
   
    return 0;
}
