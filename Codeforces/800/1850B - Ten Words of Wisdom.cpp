#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;

      vector<tuple<int, int>> pairs;
      for(int i=1; i<=n; i++){
        int a, b;
        cin >> a >> b;
        if(a<=10){
          pairs.push_back({b, i});
        }
      }

      sort(pairs.begin(), pairs.end());

      int res = get<1>(pairs[pairs.size()-1]);
      cout << res << endl;
    }

    return 0;
}
