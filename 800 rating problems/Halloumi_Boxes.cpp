#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--){
    long long n, k;
    cin>>n>>k;

    vector<long long>ar(n);
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    //copy array
    vector<long long> copy_ar = ar;
    sort(copy_ar.begin(), copy_ar.end());

    if(ar == copy_ar || k>1)
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;

  } 
   
    return 0;
}
