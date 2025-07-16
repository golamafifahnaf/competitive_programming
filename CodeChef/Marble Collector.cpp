#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x;
        set<int> unique;
        while(n--){
            cin >> x;
            unique.insert(x);
        }

        cout << m-unique.size() << endl;
    }
    return 0;
}
