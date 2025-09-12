#include<iostream>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
    int n, k;
    cin>>n>>k;
    int subar[n];

    for(int i=0; i<n; i++){
        cin>>subar[i];
    }

    bool isPresent = false;
    for(int i=0; i<n; i++){
        if( subar[i]==k ){
             isPresent = true;
             break;
        }
   }
    if(isPresent)
   cout<<"YES"<<endl;

   else
   cout<<"NO"<<endl;
}
    return 0;
}

//tc - O(n)