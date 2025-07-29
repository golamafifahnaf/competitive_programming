#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n;
    cin >> n;

    vector<int> arr(n);

    for(ll i=0; i<n; i++) cin >> arr[i];

    vector<int> ps(n);
    ps[0] = arr[0];

    for(ll i=0; i<n-1; i++){
      ps[i+1] = arr[i+1] - arr[i];
    }

    for(auto x : ps) cout << x << " ";

    cout << endl;

    return 0;
}
