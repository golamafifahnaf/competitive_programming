#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (k == 0) {
        cout << string(n, '0') << endl;
        return;
    }
    if (k == n) {
        cout << string(n, '1') << endl;
        return;
    }

    string res;
    res += '1';
    res += string(n - k - 1, '0');
    res += string(k - 1, '1');
    res += '0';

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
