#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        string s; 
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), :: toupper);
        
        // for(char &ch : s){
        //     ch = toupper(ch);
        // }

        if(s == "YES") 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
