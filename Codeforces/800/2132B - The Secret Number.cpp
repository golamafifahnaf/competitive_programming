#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while(t--){
      ll n;
      cin >> n;

      vector<ll> pow10(19, 1);
      for(int i=1; i<=18; i++) pow10[i] = pow10[i-1]*10;

      set<ll> res;

      for(int k = 1; k<=18 and (1 + pow10[k]) <=n; k++){
        ll d = 1 + pow10[k];

        if(n%d == 0) res.insert(n/d);
      }

      if(res.empty()) cout << 0 << endl;
      else{
        cout << res.size() << endl;
        for(auto &s:res) cout << s << " ";
        cout << endl;
      }
    }

    return 0;
}
