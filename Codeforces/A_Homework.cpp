#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string a; cin>>a;
        int m; cin>>m;
        string b; cin>>b;
        string c; cin>>c;

        string ans = a;

        for(int i=0; i<c.size(); i++){
            if(c[i] == 'V'){
                ans.insert(0,string(1,b[i])); // ans.insert(0,1,b[i]); 
            }

            else{
                ans.push_back(b[i]) ;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}