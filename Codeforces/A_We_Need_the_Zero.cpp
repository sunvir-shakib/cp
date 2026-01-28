#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll total_xor = 0;
        for (int i = 0; i < n; i++)
            total_xor ^= a[i];

        if (n % 2 == 1)
        {
            cout << total_xor << endl;
        }
        else
        {
            if (total_xor == 0)
                cout << total_xor << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}
