#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull n, m, a;
    cin >> n >> m >> a;

    ull flags_by_n = (n+a-1)/a;
    ull flags_by_m = (m+a-1)/a;

    cout << flags_by_n * flags_by_m << endl;

    return 0;
}
