#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int p;
    cin >> p;

    int prev_rem = 0;
    while(p--){
      int used;
      cin >> used;

      prev_rem += x-used;
    }

    cout << prev_rem + x << endl;

    return 0;
}
