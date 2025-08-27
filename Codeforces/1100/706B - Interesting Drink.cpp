#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int main()
{
    fast_io();

    ll n;
    cin >> n;

    vector<ll> price(n);
    for(ll i=0; i<n; i++) cin >> price[i];

    sort(price.begin(), price.end());

    ll q;
    cin >> q;

    while(q--){
      ll coins;
      cin >> coins;

      ll res = upper_bound(price.begin(), price.end(), coins) - price.begin();

      cout << res << endl;
    }


    return 0;
}
