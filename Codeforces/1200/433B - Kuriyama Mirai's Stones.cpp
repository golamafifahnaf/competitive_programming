#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int main()
{
    fast_io();

    ll n;
    cin >> n;

    vector<ll> a(n+1), b(n+1);
    for(ll i=1; i<=n; i++) cin >> a[i];
    b = a;
    sort(b.begin(), b.end());

    vector<ll> psa(n+1, 0), psb(n+1, 0);
    for(ll i=1; i<=n; i++){
      psa[i] = psa[i-1] + a[i];
      psb[i] = psb[i-1] + b[i];
    }

    ll m;
    cin >> m;

    while(m--){
      int type;
      ll l, r;

      cin >> type >> l >> r;

      if(type == 1) cout << psa[r] - psa[l-1] << endl;
      else cout << psb[r] - psb[l-1] << endl;
    }

    return 0;
}
