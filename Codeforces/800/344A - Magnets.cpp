#include <bits/stdc++.h>
using namespace std;

int main () {

  int n;
  cin >> n;

  int magnet;
  int magnets = 0;
  int prev = -1;

  while(n--){
    cin >> magnet;

    if(magnet!=prev){
      magnets++;
      prev = magnet;
    }
  }

  cout << magnets << endl;

  return 0;
}
