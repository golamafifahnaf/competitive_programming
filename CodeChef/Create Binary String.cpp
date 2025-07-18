#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int max_total = 0;
        for (int x = 0; x <= n; x++) {
            int y = n - x;
            int total1 = x * a + y * b + (x * y) * c;
            int total2 = x * a + y * b + (x * y) * d;
            int total = max(total1, total2);
            max_total = max(max_total, total);
        }
        cout << max_total << endl;
    }
    return 0;
}
