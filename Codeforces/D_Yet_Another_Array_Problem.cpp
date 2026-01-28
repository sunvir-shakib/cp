#include<iostream>
#include<vector>
#include<algorithm>
// #include<cmath>
using namespace std;
#define ll long long

int main() {

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> ar(n);
        for (auto &x : ar) cin >> x;

        ll g = ar[0];
        for (int i = 1; i < n; i++)
            g = __gcd(g, ar[i]);


        ll ans = -1;
        for (ll x = 2; x <= 1000; x++) {  
            if (__gcd(g, x) == 1) {
                ans = x;
                break;
            }
        }

        cout << ans << endl;
    }
}
