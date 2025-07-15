#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;
        if(x%k != 0){
            cout << 1 << "\n";
            cout << x << "\n";
        }
        else{
            for(int i=x-1; i>0; i--){
                if(i % k != 0 && x-i % k != 0){
                    cout << 2 << "\n";
                    cout << i << " " << x-i << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}
