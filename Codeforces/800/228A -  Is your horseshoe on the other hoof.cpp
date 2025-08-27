#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using LL = __int128;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    ll a, b, c, d;
    cin >> a>> b>> c>> d;

    set<ll> unique;
    unique.insert(a);
    unique.insert(b);
    unique.insert(c);
    unique.insert(d);

    cout << 4 - unique.size() << endl;

    return 0;
}
