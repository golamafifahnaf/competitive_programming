#include <bits/stdc++.h>
using namespace std;

void fast_io(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main()
{
    fast_io();

    int n, k;
    cin >> n >> k;

    vector<int> seq(n+1);

    for(int i=1; i<=n; i++) cin >> seq[i];

    sort(seq.begin(), seq.end());

    if(k==0){
      if(seq[1] > 1) cout << seq[1] - 1 << endl;
      else cout << -1 << endl;
    }
    else if(k==n) cout << seq[k] << endl;
    else{
      if(seq[k] == seq[k+1]) cout << -1 << endl;
      else cout << seq[k] << endl;
    }

    return 0;
}
