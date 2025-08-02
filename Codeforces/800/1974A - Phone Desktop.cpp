#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--){
    int x, y;
    cin >> x >> y;

    int screens = (y + 1) / 2;

    int used_cells = y * 4;

    int free_cells = screens * 15 - used_cells;

    int extra_icons = max(0, x - free_cells);

    screens += (extra_icons + 14) / 15;

    cout << screens << endl;
  }

  return 0;
}
