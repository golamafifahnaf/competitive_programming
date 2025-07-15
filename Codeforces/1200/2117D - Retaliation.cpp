#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long a1 = a[0];
        long long an = a[n - 1];
        long long denominator = (long long)n * n - 1;
        // Compute x and y
        // x = (n * an - a1) / (n^2 - 1)
        // y = (n * a1 - an) / (n^2 - 1)
        long long numerator_x = (long long)n * an - a1;
        long long numerator_y = (long long)n * a1 - an;
        if (numerator_x % denominator != 0 || numerator_y % denominator != 0) {
            cout << "NO" << endl;
            continue;
        }
        long long x = numerator_x / denominator;
        long long y = numerator_y / denominator;
        if (x < 0 || y < 0) {
            cout << "NO" << endl;
            continue;
        }
        // Now check all elements
        bool possible = true;
        for (int i = 1; i <= n; ++i) {
            long long expected = x * i + y * (n - i + 1);
            if (a[i - 1] != expected) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
