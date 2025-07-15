#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, h, x, w=0;
    cin >> n >> h;
    while(n--){
      cin >> x;
      if(x>h) w+=2;
      else w++;
    }
    cout << w << endl;
    return 0;
}
