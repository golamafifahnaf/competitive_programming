#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int hikes = 0;
        int i = 0;

        while (i <= n - k) {
            bool canHike = true;
            for (int j = i; j < i + k; j++) {
                if (a[j] == 1) {
                    canHike = false;
                    break;
                }
            }

            if (canHike) {
                hikes++;
                i += k + 1;
            } else {
                i++;
            }
        }

        cout << hikes << endl;
    }

    return 0;
}
