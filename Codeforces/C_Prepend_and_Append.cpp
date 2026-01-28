#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        int i = 0; 
        int j = n - 1;

        // if (n == 1) {
        //     ans = 1;
        // } 
        
        // else if (n == 2) {
        //     if (s[0] == s[1]){
        //         ans = 2;
        //     } 
        //     else {
        //         ans = 0;
        //     }
        // } 
        
        // else {
        
            while (i < j && s[i] != s[j]) {
                i++;
                j--;
            }
            ans = n - (2*i);  
        // }

        cout << ans << endl;
    }

    return 0;
}
