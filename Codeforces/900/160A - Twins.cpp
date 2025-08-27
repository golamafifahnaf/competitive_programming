#include <bits/stdc++.h>
using namespace std;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    int n, total = 0;
    cin >> n;

    vector<int> coin(n);

    for(int i=0; i<n; i++){
      cin >> coin[i];
      total += coin[i];
    }

    if(n==1){
      cout << 1 << endl;
      return 0;
    }

    sort(coin.begin(), coin.end());
    reverse(coin.begin(), coin.end());

    int picked = 0;

    for(int i=0; i<n; i++){
      total -= coin[i];
      picked += coin[i];
      if(picked > total){
        cout << i+1 << endl;
        break;
      }
    }

    return 0;
}
