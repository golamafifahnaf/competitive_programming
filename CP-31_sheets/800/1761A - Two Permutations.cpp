#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--){
    int n, a, b;
    cin >> n >> a >> b;

    if(b <= n-a-2) cout << "Yes" << endl;
    else if(a==n and b==n) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
