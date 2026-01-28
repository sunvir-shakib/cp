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

    int ans = 0;
    float runs = 0;

    for(int i=0; i<n; i++){

        runs = runs + ar[i];

        if((runs / (i+1)) * 100 == 100 ){
            ans++;
        }
    }

    cout<<ans<<endl;

  } 
   
    return 0;
}
