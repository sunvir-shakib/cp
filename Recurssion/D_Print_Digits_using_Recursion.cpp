#include<iostream>
using namespace std;

void printDigit(int n){
    if(n<10){
        cout<<n;
        return;
    }
    
    int z = n%10;
    int x = n/10;
    
    printDigit(x);
    // cout<<z;
    // if(n!=0){
    //     cout<<" ";
    // }
}

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0)
        cout<<n;

        printDigit(n);
        cout<<endl;
    }
   
   
    return 0;
}
