#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        sort(ar.begin(), ar.end());
        int mx = ar[n-1];
        vector<int> arB;
        vector<int>arC;
        int ans = 0;

        for(int i=0; i<n-1; i++){ 
            if(ar[0] == ar[n-1]){ //equal
                ans = -1;
            }
        }
        
        if(ans != -1){  
            for(int i=0; i<n; i++){
                if(ar[i] != mx){
                    arB.push_back(ar[i]);
                }

                else{
                    arC.push_back(mx);
                }
            }
        }
  
 
        //output
        if(ans == -1){
            cout<<ans<<endl;
        }

        else{
        cout<<arB.size() <<" ";
        cout<<arC.size() <<endl;

        for(auto i: arB){
            cout<<i<<" ";
        }
        cout<<endl;

        for(auto i: arC){
            cout<<i<<" ";
        }
        cout<<endl;
           
        }
    }
   
    return 0;
}