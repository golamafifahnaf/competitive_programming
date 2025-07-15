#include <bits/stdc++.h>
using namespace std;

int min_actions(int x) {
    int low = 0, high = 60;
    while (low < high) {
        int mid = (low + high) / 2;
        if ((1ll << mid) >= x + 1) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return 2 * low + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << min_actions(x) << "\n";
    }
    return 0;
}
