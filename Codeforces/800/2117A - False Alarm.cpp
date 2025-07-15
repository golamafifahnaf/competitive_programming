#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, x;
      cin >> n >> x;
      vector<int> door(n);
      for(int i=0; i<n; i++){
        cin >> door[i];
      }

      if(x>=n){
        cout << "YES" << endl;
      }
      else{
        int door_left, found = 0;
        for(int i=0; i<n; i++){
          if(door[i]==1){
            door_left = n - (i - 1 + x);
            if(door_left<=0){
              cout << "YES" << endl;
              break;
            }
            else{
              for(int j=i+x; j<n; j++){
                if(door[j]==1){
                  found=1;
                  break;
                }
              }
              if(found){
                cout << "NO" << endl;
              }
              else{
                cout << "YES" << endl;
              }
              break;
            }
          }
        }
      }
    }
    return 0;
}
