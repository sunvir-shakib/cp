#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        string temp = x;
        int operations = 0;

        bool found = false;
        for (int i = 0; i <= 10; i++) {
            if (temp.find(s) != -1) {
                cout << operations << endl;
                found = true;
                break;
            }
            //double the string
            temp += temp;
            operations++;
        }

        //never found
        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
