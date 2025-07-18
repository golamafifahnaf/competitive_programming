#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int x;
    cin >> x;
    int remain = 25 - x;
    int year = (remain + 3) / 4;
    cout << year << endl;
    return 0;
}
