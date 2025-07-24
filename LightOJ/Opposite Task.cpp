#include <bits/stdc++.h>
using namespace std;

void problemsStored(int n) {
    if(n>10){
        cout << n-10 << " " << 10 << endl;
    }
    else{
        cout << 0 << " " << n << endl;
    }
}

int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        problemsStored(n);
    }
    return 0;
}
