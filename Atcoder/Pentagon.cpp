#include <bits/stdc++.h>
using namespace std;


int distance(char a, char b) {
    string order = "ABCDE";
    int i = order.find(a);
    int j = order.find(b);
    int cw = (j-i+5) % 5;
    int ccw = (i-j+5) % 5;
    return min(cw, ccw);
}

int main() {
    string s1s2, t1t2;
    cin >> s1s2;
    cin >> t1t2;

    char s1 = s1s2[0], s2 = s1s2[1];
    char t1 = t1t2[0], t2 = t1t2[1];

    int d1 = distance(s1, s2);
    int d2 = distance(t1, t2);

    if (d1 == d2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
