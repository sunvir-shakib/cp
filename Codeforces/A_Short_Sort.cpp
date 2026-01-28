#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        string ans = "abc";

        if(s[0] == 'a' || s[1] == 'b' || s[2]== 'c'){
            cout<<"YES"<<endl;
        }

        else
        cout<<"NO"<<endl;

    }

    return 0;
}