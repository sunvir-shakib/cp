#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        string f = "codeforces";

        int count = 0;
        for(int i=0; i<10; i++){
            for(int j=i; j<=i; j++){
                if(s[i] != f[i]){
                    count++;
                }
                else{
                    continue;
                }
            }
        }

        cout<<count<<endl;

    }



    return 0;
}