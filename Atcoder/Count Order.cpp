#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> p, vector<int> q){
    vector<int> prm(n);

    for(int i=0; i<n; i++) prm[i] = i+1;

    int pos_p = -1;
    int pos_q = -1;
    int idx = 0;

    while(next_permutation(prm.begin(), prm.end())){
      if(prm == p) pos_p = idx;
      if(prm == q) pos_q = idx;
      idx++;
    }

    return abs(pos_p - pos_q);
}

int main()
{
    int n;;
    cin >> n;

    vector<int> p(n), q(n);

    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];

    int res = solve(n, p, q);

    cout << res << endl;

    return 0;
}
