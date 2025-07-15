#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int total = 0;
        for (int i = 0; i < 10; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < 10; j++) {
                if (row[j] == 'X') {
                    int ring = min({i, 9 - i, j, 9 - j}) + 1;
                    total += ring;
                }
            }
        }
        cout << total << "\n";
    }

    return 0;
}
