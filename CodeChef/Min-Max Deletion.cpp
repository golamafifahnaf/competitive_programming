#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector < int > a(n + 2, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        long long score = 0;
        for (int i = 1; i < n; ++i) {
            score += min(a[i], a[i + 1]);
        }

        while (q--) {
            int i, x;
            cin >> i >> x;

            if (i > 1) score -= min(a[i - 1], a[i]);
            if (i < n) score -= min(a[i], a[i + 1]);

            a[i] = x;

            if (i > 1) score += min(a[i - 1], a[i]);
            if (i < n) score += min(a[i], a[i + 1]);

            cout << score << '\n';
        }
    }

    return 0;
}
