#include <bits/stdc++.h>
using namespace std;

bool isConsonent(char c){
  return c=='b' or c=='c' or c=='d';
}

int main()
{
    int t;
    cin >> t;

    while(t--){
      int n;
      cin >> n;

      string s;
      cin >> s;

      string ns;

      if(n > 3){
        for(int i=0; i<n; i++){
          if(isConsonent(s[i+2]) and isConsonent(s[i+3])){
            ns += s.substr(i, 3);
            ns += '.';
            i += 2;
          }
          else{
            ns += s.substr(i, 2);
            ns += '.';
            i += 1;
          }
        }

        if(ns.back() == '.') ns.pop_back();
        if(ns[ns.size()-2] == '.') ns.erase(ns.size()-2, 1);

        cout << ns << endl;
      }
      else{
        cout << s << endl;
      }
    }

    return 0;
}
