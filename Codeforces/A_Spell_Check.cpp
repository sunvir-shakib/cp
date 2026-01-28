#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string tm = "Timur"; //5

        if(n != 5){
            cout<<"NO"<<endl;
            continue;
        }

        sort(s.begin(), s.end());
        sort(tm.begin(), tm.end());

        if (s == tm) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
  
    }

    return 0;
}