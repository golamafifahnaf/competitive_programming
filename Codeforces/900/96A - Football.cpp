#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string sub;
    sub += s[0];
    bool dangerous = false;

    for(int i=0; i<s.size()-1; i++){
      if(s[i+1] == s[i]){
        sub += s[i+1];

        if(sub.size() == 7){
          dangerous = true;
          break;
        }
      }
      else{
        sub.clear();
        sub += s[i+1];
      }
    }

    if(dangerous) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
