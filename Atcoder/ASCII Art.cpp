#include <bits/stdc++.h>
using namespace std;

char alp[27] = {'.', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(h, vector<int> (w));

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cin >> a[i][j];
      }
    }

    vector<vector<char>> s(h, vector<char> (w));

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        s[i][j] = alp[a[i][j]];
        cout << s[i][j];
      }
      cout << endl;
    }

    return 0;
}
