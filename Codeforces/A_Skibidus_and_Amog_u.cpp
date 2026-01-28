#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string ans = "";

        // s.pop_back();
        // s.pop_back();

        for(int i=0; i<s.size()-2; i++){
            ans += s[i];
        }

        ans = ans + 'i';
        cout<<ans<<endl;

    }


    return 0;
}