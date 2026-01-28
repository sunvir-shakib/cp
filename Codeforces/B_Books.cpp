#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,t; cin>>n>>t;

    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    int sum = 0;
    int l = 0;
    int ans = 0;


    for(int r=0; r<ar.size(); r++){
        sum += ar[r];
        while(sum > t){
            sum -= ar[l];
            l++;
        }

        ans = max(ans, r-l+1);

    }

    cout<<ans<<endl;


    return 0;
}