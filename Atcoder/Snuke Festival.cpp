#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    ll n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> b[i];
    for(ll i=0; i<n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans = 0;

    for(ll i=0; i<n; i++){
      ll cntA = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
      ll cntC = n - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
      ans += cntA*cntC;
    }

    cout << ans << endl;

    return 0;
}
