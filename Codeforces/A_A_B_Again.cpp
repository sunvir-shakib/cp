#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int x = n%10;
        int y = n/10;

        cout<<x+y<<endl;
    }



    return 0;
}