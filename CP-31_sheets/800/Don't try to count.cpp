#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string current = x;
        int operations = 0;

        while (current.size() <= 300) { // upper bound safe to prevent infinite loop
            if (current.find(s) != string::npos) {
                cout << operations << "\n";
                break;
            }
            current += current;
            operations++;
        }

        if (current.size() > 300) {
            cout << -1 << "\n";
        }
    }

    return 0;
}
