#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<int>tmp;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                continue;
            }
            else{
                tmp.push_back(i);
            }
        }

        cout<<tmp.size()<<endl;
        for(int i=0; i<tmp.size(); i++){
            cout<<tmp[i]+1<<" ";
        }

        cout<<endl;

    }


    return 0;
}
