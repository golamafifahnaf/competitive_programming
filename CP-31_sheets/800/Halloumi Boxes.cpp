#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
      int n, k, i;
      cin >> n >> k;
      vector<int> a(n), b(n);
      for(i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
      }

      sort(b.begin(), b.end());

      if(k==1){
        if(a==b){
          cout << "YES" << "\n";
        }
        else{
          cout << "NO" << "\n";
        }
      }
      else{
        cout << "YES" << "\n";
      }
    }

    return 0;
}
