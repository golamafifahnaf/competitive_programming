#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<char>> a(h, vector<char>(w)), b(h, vector<char>(w));

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cin >> a[i][j];
      }
    }

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cin >> b[i][j];
      }
    }

    bool possible = false;

    for(int s=0; s<h; s++){
      for(int t=0; t<w; t++){
        bool equal = true;
        for(int i=0; i<h; i++){
          for(int j=0; j<w; j++){
            if(b[i][j] != a[(i+s)%h][(j+t)%w]){
              equal = false;
            }
          }
        }
        if(equal){
          possible = true;
        }
      }
    }

    if(possible) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
