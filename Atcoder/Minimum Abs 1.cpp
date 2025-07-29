#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n+1), b(n+1);

    for(int i=1; i<=n; i++){
      cin >> a[i];

      if(a[i] < l){
        b[i] = l;
      }
      else if(a[i] >= l and a[i] <= r){
        b[i] = a[i];
      }
      else{
        b[i] = r;
      }
    }

    for(int i=1; i<=n; i++){
      cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
