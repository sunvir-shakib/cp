#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i = 0; i<n; i++){
        cin>>ar[i];

        if(ar[i] < 0){
            ar[i]*= -1;
        }
    }

    int count = 0;
    sort(ar.begin(), ar.end());

    if(ar[0] == 0){
        int count = 0;
    }

    else{
        for(int i=0; i<ar[0]; i++){
            count++;
        }
    }
 
    cout<<count<<endl;
    return 0;
}
