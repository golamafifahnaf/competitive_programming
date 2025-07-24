#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int main() {
    int cases;
    cin >> cases;
    for(int i=1; i<=cases; i++){
        int a, b;
        cin >> a >> b;
        int total = sum(a,b);
        cout << "Case " << i << ": " << total << endl;
    }
    return 0;
}
