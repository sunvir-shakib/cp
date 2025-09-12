#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int ans = 0;
        char ar[10][10];

        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> ar[i][j];
            }
        }

        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (ar[i][j] == 'X') {
                    // int dis = min(min(i, j), min(9-i, 9-j)) + 1;
                    int dis = min({i, j, 9 - i, 9 - j}) + 1; //adding 1 cz starting from 0
                    ans += dis;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
