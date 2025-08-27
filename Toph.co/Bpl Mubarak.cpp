#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
      string s;
      cin >> s;

      int balls = s.size();

      for(char c:s)if(c == 'W' or c == 'N' or c == 'D') balls--;

      int over = balls/6;
      int rem = balls%6;

      if(over > 1){
        if(rem > 1) cout << over << " OVERS " << rem << " BALLS\n";
        else if(rem == 0) cout << over << " OVERS\n";
        else cout << over << " OVERS " << rem << " BALL\n";
      }
      else if(over == 0){
        if(rem > 1) cout << rem << " BALLS\n";
        else cout << rem << " BALL\n";
      }
      else{
        if(rem > 1) cout << over << " OVER " << rem << " BALLS\n";
        else if(rem == 0) cout << over << " OVER\n";
        else cout << over << " OVER " << rem << " BALL\n";
      }
    }

    return 0;
}
