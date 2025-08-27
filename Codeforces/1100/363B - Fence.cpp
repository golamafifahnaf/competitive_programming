#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int main()
{
    fast_io();

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++) cin >> a[i];

    vector<ll> ps(n+1, 0);
    for(ll i=1; i<=n; i++) ps[i] = ps[i-1] + a[i];

    ll min_sum = LLONG_MAX, res;

    for(ll l=1; l+k-1<=n; l++){
      ll r = l+k-1;
      ll sum = ps[r] - ps[l-1];

      if(sum < min_sum){
        min_sum = sum;
        res = l;
      }
    }

    cout << res << endl;

    return 0;
}
