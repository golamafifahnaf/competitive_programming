#include <bits/stdc++.h>
using namespace std;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> res(n);

    for(int i=0; i<n; i++){
      int solved;
      int penalty;
      cin >> solved >> penalty;
      res[i] = {solved, penalty};
    }

    sort(res.begin(), res.end(), [](const auto &L, const auto &R){
      if (L.first != R.first) return L.first > R.first;
      return L.second < R.second;
    });

    auto place = res[k-1];

    int total = 0;
    for(auto p:res){
      if(p == place) ++total;
    }

    cout << total << endl;

    return 0;
}
