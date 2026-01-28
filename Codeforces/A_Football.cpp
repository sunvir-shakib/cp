#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1;      
    bool flag = false;

    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
            if (count >= 7) {
                flag = true;
                break;
            }
        } 
        
        else {
            count = 1;   
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
