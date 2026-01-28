#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        vector<long long> ar(n);
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        
        //inserting at the beg and end
        ar.insert(ar.begin(), 0);
        ar.push_back(x);
        
        long long maxVal = 0;
        
        //consecutive distance
        for(int i=0; i<ar.size()-1; i++){ 
            maxVal = max(maxVal, ar[i+1]-ar[i]);
        }
        
        maxVal = max(maxVal, 2 * (ar[ar.size() - 1] - ar[ar.size() - 2]));
        
        cout<<maxVal<<endl;
    }
    return 0;
}