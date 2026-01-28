#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ar(n);

        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        bool odd = false;
        bool even = false;

        for (int i = 0; i < n; i++) {
            if (ar[i] % 2 == 0) even = true;
            else odd = true;
        }


        if (odd == true && even == true) {
            sort(ar.begin(), ar.end());
        }


        for (int i = 0; i < n; i++) {
            cout << ar[i] << " ";
        }

        cout << endl;

        
    }


    return 0;
}
