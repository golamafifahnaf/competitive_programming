#include <bits/stdc++.h>
using namespace std;

int points_need(int n, vector<int> a){
  int high = *max_element(a.begin(), a.end());

  if(a[0] == high){
    for(int i=1; i<n; i++){
      if(a[i]==high){
        return 1;
        break;
      }
    }
    return 0;
  }
  else return high - a[0] + 1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> ability(n);

    for(int i=0; i<n; i++){
      cin >> ability[i];
    }

    int res = points_need(n, ability);

    cout << res << endl;

    return 0;
}
