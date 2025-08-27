#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll n, t;
    cin >> n >> t;

    vector<ll> req(n);
    for(ll i=0; i<n; i++) cin >> req[i];

    ll l=0;
    ll times=0;
    ll books=0;

    for(ll r=0; r<n; r++){
        times += req[r];
        while(times > t){
            times -= req[l];
            l++;
        }

        books = max(books, (r-l+1));
    }

    cout << books << endl;
    return 0;
}
