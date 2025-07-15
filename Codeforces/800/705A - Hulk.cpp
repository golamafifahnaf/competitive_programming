#include <bits/stdc++.h>
using namespace std;

int main () {

  int n;
  cin >> n;
  string s = "";

  for(int i=1; i<=n; i++){
    if(i%2!=0){
      s+="I hate that ";
    }
    else{
      s+="I love that ";
    }

  }

  s.replace(s.end()-5, s.end(), "it");
  cout << s << endl;

  return 0;
}
