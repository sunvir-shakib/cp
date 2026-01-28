#include<iostream>
#include<map>
using namespace std;

int main() 
{
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ar[n];
        map<int, int> frq;
        for(int i =0; i<n; i++){
            cin>>ar[i];
            frq[ar[i]]++;
        }

        int flag = 1;
        int frq1 = frq.begin()->second; //smallest value
        int frq2 = frq.rbegin()->second; //largest value
       
        if (frq.size() > 2){
            flag = 0;
        }

        else if (frq.size() == 2) {
            if (abs(frq1 - frq2) > 1) {
                flag = 0;
            }
        }
            
        if(flag){
            cout<<"Yes\n";
        }

        else{
            cout<<"No\n";
        }
    }
   
    return 0;
}
