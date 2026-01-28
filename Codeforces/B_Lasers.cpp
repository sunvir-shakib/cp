#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;

        int p, q;
        for (int i = 1; i <= n; i++) {
            cin >> p;
        }

        for (int i = 1; i <= m; i++) {
            cin >> q;
        }

        cout << n + m << endl;
    }
    
    return 0;
}
