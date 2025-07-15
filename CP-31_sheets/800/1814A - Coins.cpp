#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k % 2 == 1) {
            // k is odd: possible if n >= k or n is even
            if (n % 2 == 0 || n >= k) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            // k is even: possible only if n is even
            if (n % 2 == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

int main() {
    solve();
    return 0;
}

