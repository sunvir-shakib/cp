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

        int count = 0;
        int curr = 0;
        
        for(int i=0; i<n; i++){
            if(ar[i] == 2){
                count ++;
            }
        }

        int ans = -1;
        for(int i=0; i<n; i++){
            if(ar[i] == 2){
                curr++;
            }

            if(curr == (count - curr)){ //for all 1, 0 == 0
                ans  = i+1; //curr idx+1
                break;
            }
        }

        cout<<ans<<endl;

    }
   
   
    return 0;
}
