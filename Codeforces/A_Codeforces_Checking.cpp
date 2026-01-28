#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s = "codeforces";
        char ch; cin>>ch;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ch){
                count ++;
                break;
            }
        }

        if(count){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}