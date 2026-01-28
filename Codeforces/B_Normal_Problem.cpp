#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;

        string ans = "";
        for(int i=s1.size()-1; i>=0; i--){
            if(s1[i] == 'p')
            ans += 'q';

            else if(s1[i] == 'q')
            ans+= 'p';

            else
            ans+='w';

        }

        cout<<ans<<endl;
    }



    return 0;
}