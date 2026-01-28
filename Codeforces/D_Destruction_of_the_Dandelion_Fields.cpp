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

    long long sum = 0;
    vector<int> oddArr;

    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];

        if(ar[i] % 2 != 0){
            oddArr.push_back(ar[i]);
        }

        else{
            sum += ar[i];
        }
    }

    if(oddArr.size() == 0){
        cout<<0<<endl;
    }

    else{
        int m = oddArr.size();
        sort(oddArr.begin(), oddArr.end());
        for(int i = m/2; i<m; i++){
            sum += oddArr[i];
        }
        cout<<sum<<endl;
    }
  } 
    return 0;
}
