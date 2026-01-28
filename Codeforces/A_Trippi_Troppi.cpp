#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(); //clear newline after read t
    while(t--){
        string sen;
        getline(cin, sen);

        string ans = "";
        ans = sen[0];

        for(int i=0; i<sen.size(); i++){
    
            if(sen[i] == ' '){
                ans+= sen[i+1];
            }

            else{
                continue;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}