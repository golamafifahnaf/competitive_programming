#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) cout << -1 << endl;
        else {
            int found = 0;
            for (int i = 0; i < n-1; i++) {
                if (a[i] != a[i + 1]) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                cout << 2 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
