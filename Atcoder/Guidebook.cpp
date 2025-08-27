#include <bits/stdc++.h>
using namespace std;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    int n;
    cin >> n;

    vector<pair<pair<string, int>, int>> restaurants(n);

    for(int i=0; i<n; i++){
      string city;
      int score;
      cin >> city >> score;
      restaurants[i] = {{city, score}, i};
    }

    sort(restaurants.begin(), restaurants.end(), [](const auto &L, const auto &R){
      if (L.first.first != R.first.first) return L.first.first < R.first.first;
      if (L.first.second != R.first.second) return L.first.second > R.first.second;
      return L.second < R.second;
    });

    for(const auto p:restaurants) cout << p.second+1 << endl;

    return 0;
}
