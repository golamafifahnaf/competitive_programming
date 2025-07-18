#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);

        int count_mod[3] = {
            0
        };

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            count_mod[a[i] % 3]++;
        }

        if (count_mod[0] >= 1) {
            cout << "Yes\n";
        } else if (count_mod[1] >= 1 && count_mod[2] >= 1) {
            cout << "Yes\n";
        } else if (count_mod[1] >= 3 || count_mod[2] >= 3) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
