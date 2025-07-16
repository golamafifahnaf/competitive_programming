#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int total=0;
        vector<int> x(n+1);
        for(int i=1; i<=n; i++){
            cin >> x[i];
        }

        bool passed = true;
        for(int i=1; i<=n; i++){
            total += x[i];
            if(total/i < 40){
              passed = false;
              break;
            }
        }

        if(!passed) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}
