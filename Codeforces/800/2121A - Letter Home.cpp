#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        int min_el = *min_element(x.begin(), x.end());
        int max_el = *max_element(x.begin(), x.end());
        int total;
        if (s <= min_el) {
            total = max_el - s;
        } else if (s >= max_el) {
            total = s - min_el;
        } else {
            total = (max_el - min_el) + min(s - min_el, max_el - s);
        }
        cout << total << endl;
    }
    return 0;
}
