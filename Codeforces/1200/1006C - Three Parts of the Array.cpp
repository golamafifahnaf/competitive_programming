#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int main()
{
    fast_io();

    ll n;
    cin >> n;

    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++) cin >> a[i];

    vector<ll> prefix(n+1), suffix(n+1);
    prefix[1] = a[1];
    suffix[n] = a[n];
    for(ll i=2; i<=n; i++) prefix[i] = prefix[i-1] + a[i];
    for(ll i=n-1; i>=1; --i) suffix[i] = suffix[i+1] + a[i];

    ll l = 1, r = n;
    ll res = 0;

    while(l<r){
      ll sumL = prefix[l];
      ll sumR = suffix[r];

      if(sumL == sumR){
        res = max(res, sumL);
        l++;
      }
      else if(sumL < sumR) l++;
      else r--;
    }

    cout << res << endl;

    return 0;
}
