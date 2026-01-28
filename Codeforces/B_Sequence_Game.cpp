#include<iostream>
#include<vector>
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

        vector<int> a;
        a.push_back(ar[0]);
        for(int i=1; i<n; i++){
            if(ar[i] >= ar[i-1]){
                a.push_back(ar[i]);
            }
            
            else{
                a.push_back(ar[i]);
                a.push_back(ar[i]);
            }
        }

        cout<<a.size()<<endl;
        
        for(auto i: a){
            cout<<i << " ";
        }
        cout<<endl;
    }  
    return 0;
}
