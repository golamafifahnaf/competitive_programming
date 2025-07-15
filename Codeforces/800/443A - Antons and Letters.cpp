#include <bits/stdc++.h>
using namespace std;

int main () {

  string s;
  getline(cin, s);
  if(s.size()==2){
    cout << 0;
  }
  else{
    set<char> c;
    for(int i=1; i<s.size()-1; i+=3){
      c.insert(s[i]);
    }
    cout << c.size();
  }

  return 0;
}
