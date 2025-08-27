#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using LL = __int128;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

ll digits(ll n){
  if(n==0) return 1;

  ll cnt = 0;
  while(n>0){
    n /= 10;
    cnt++;
  }
  return cnt;
}

int main()
{
    fast_io();

    ll a,b,x;
    cin >> a >> b >> x;

    ll l = 0;
    ll r = 1e9;
    ll ans = 0;
    while(l<=r){
      ll m = (l+r)/2;
      LL cost = a*m + b*digits(m);

      if(cost <= x){
        ans = m;
        l = m+1;
      }
      else r = m-1;
    }

    cout << ans << endl;

    return 0;
}
