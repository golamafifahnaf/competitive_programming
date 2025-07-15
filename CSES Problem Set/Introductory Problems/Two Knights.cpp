#include <bits/stdc++.h>

using namespace std;
using lli = long long int;

lli calculateWays(int K) {
    lli totalWays = ((lli) K * K * (K * K - 1)) / 2;
    lli attackingWays = 4 * (K - 1) * (K - 2);

    lli ans = totalWays - attackingWays;

    return ans;
}

int main() {
    int N;
    cin >> N;

    for (lli K = 1; K <= N; K++) {
        cout << calculateWays(K) << endl;
    }

    return 0;
}
