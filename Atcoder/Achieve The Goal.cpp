#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m, total = 0;
    cin >> n >> k >> m;
    vector<int> num(n);

    for(int i=0; i<n-1; i++){
      cin >> num[i];
      total += num[i];
    }

    int req = (m*n) - total;
    if(req <= k){
      if(req <= 0) cout << 0 << endl;
      else cout << req << endl;
    }
    else{
      cout << -1 << endl;
    }

    return 0;
}
