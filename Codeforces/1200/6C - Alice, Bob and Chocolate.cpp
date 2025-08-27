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

    ll l = 1, r = n;
    ll alice = 0, bob = 0;
    ll tA = 0, tB = 0;

    while(l <= r){
      if(tA <= tB){
        tA += a[l];
        l++;
        alice++;
      }
      else{
        tB += a[r];
        r--;
        bob++;
      }
    }

    cout << alice << " " << bob << endl;

    return 0;
}
