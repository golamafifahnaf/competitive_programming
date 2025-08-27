#include <bits/stdc++.h>
using namespace std;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    int n;
    cin >> n;

    vector<pair<int, int>> order(n);
    vector<int> a(n);

    for(int i=0; i<n; i++){
      cin >> a[i];
      order[i] = {a[i], i};
    }

    sort(order.begin(), order.end());

    for(auto p:order) cout << p.second+1 << " ";
    cout << endl;

    return 0;
}
