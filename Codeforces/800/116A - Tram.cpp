#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cap = 0, total = 0;
    cin >> n;

    while(n--){
      int a, b;
      cin >> a >> b;
      total -= a;
      cap = max(cap, total);
      total += b;
      cap = max(cap, total);
    }

    cout << cap;
    return 0;
}
