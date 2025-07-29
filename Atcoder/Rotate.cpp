#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));

    for(int i=0; i<n; i++){
      cin >> s;
      for(int j=0; j<n; j++){
        a[i][j] = s[j] - '0';
      }
    }

    // for 0th row
    for(int j=0; j<n-1; j++){
      b[0][j+1] = a[0][j];
    }

    //for n-1th column
    for(int i=0; i<n-1; i++){
      b[i+1][n-1] = a[i][n-1];
    }

    //for n-1th row
    for(int j=n-1; j>0; j--){
      b[n-1][j-1] = a[n-1][j];
    }

    //for 0th column
    for(int i=n-1; i>0; i--){
      b[i-1][0] = a[i][0];
    }

    //for remaining (i,j)
    for(int i=1; i<n-1; i++){
      for(int j=1; j<n-1; j++){
        b[i][j] = a[i][j];
      }
    }

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout << b[i][j];
      }
      cout << endl;
    }

    return 0;
}
