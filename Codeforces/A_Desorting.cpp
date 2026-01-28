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

    int min_op = INT_MAX;

    for(int i=0; i<n-1; i++){
        if(ar[i] <= ar[i+1]){
            int diff = ar[i+1] - ar[i];
            int op = diff/2 + 1;
            min_op = min(op, min_op);
        }

        else{
            min_op = 0;
        }
    }

    cout<<min_op<<endl;

    }

    return 0;
}
