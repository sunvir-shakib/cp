#include<iostream>
using namespace std;

void conBin(int n){

    if(n > 1){
        conBin(n/2); 
    }
    cout<< n%2; //reminder
}

int main() 
{
    int t;
    cin>>t;

    while(t--){
        int dec;
        cin>>dec;
        conBin(dec);
        cout<<endl;

    }

    return 0;
}

