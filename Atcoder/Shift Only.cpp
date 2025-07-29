#include <bits/stdc++.h>
using namespace std;

int DivBy2(int x){
  int total = 0;

  while(x % 2 == 0){
    x /= 2;
    total++;
  }

  return total;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
      cin >> a[i];
    }

    set<int > op;
    bool alleven = true;

    for(int i=0; i<n; i++){
      if(a[i] % 2 == 0){
        int total = DivBy2(a[i]);
        op.insert(total);
      }
      else{
        alleven = false;
        break;
      }
    }

    if(alleven){
      auto it = op.begin();
      cout << *it << endl;
    }
    else{
      cout << 0 << endl;
    }

    return 0;
}
