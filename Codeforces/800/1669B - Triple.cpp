#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
      long long n;
      cin >> n;

      vector<long long> a(n);

      for(long long i=0; i<n; i++){
        cin >> a[i];
      }

      sort(a.begin(), a.end());

      long long start = a[0];
      long long occ = 1;
      bool found = false;

      for(long long i=1; i<n; i++){
        if(start == a[i]){
          occ++;
          if(occ == 3){
            found = true;
            break;
          }
        }
        else{
          occ = 1;
          start = a[i];
        }
      }

      if(found) cout << start << endl;
      else cout << -1 << endl;
    }

    return 0;
}
