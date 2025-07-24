#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        ll k;
        cin >> n >> k;

        if(n>=k and (n%2 == k%2)){
            cout << "YES" << endl;
            for(int i=0; i < k-1; ++i){
                cout << 1 << " ";
            }
            cout << n - (k-1) << endl;
        }
        else if(n>=2*k and n%2==0){
            cout << "YES\n";
            for (int i=0; i<k-1; ++i)
                cout << 2 << " ";
            cout << n - 2*(k - 1) << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
