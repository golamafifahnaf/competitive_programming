#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a(9, vector<int>(9));

    for(int i=0; i<9; i++){
      for(int j=0; j<9; j++){
        cin >> a[i][j];
      }
    }

    set<int> checked;
    bool unique = true;

    // check by row
    for(int i=0; i<9; i++){
      for(int j=0; j<9; j++){
        checked.insert(a[i][j]);
      }
      if(checked.size() < 9){
        unique = false;
        break;
      }
      checked.clear();
    }

    // check by column
    for(int j=0; j<9; j++){
      for(int i=0; i<9; i++){
        checked.insert(a[i][j]);
      }
      if(checked.size() < 9){
        unique = false;
        break;
      }
      checked.clear();
    }

    //check all 3x3 grids
    for(int k=0; k<=6; k+=3){
      for(int i=k; i<k+3; i++){
        for(int j=k; j<k+3; j++){
          checked.insert(a[i][j]);
        }
      }
      if(checked.size() < 9){
        unique = false;
        break;
      }
      checked.clear();
    }

    if(unique) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
