#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int main()
{
    fast_io();

    ll n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<ll> AC(n, 0);
    for(ll i=1; i<n; i++){
      if(s[i-1] == 'A' and s[i] == 'C') AC[i] = AC[i-1] + 1;
      else AC[i] = AC[i-1];
    }

    while(q--){
      ll l, r;
      cin >> l >> r;
      cout << AC[r-1] - AC[l-1] << endl;
    }

    return 0;
}
