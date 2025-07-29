#include <bits/stdc++.h>
using namespace std;

bool isEqual(string s){
  return s=="and" or s=="not" or s=="that" or s=="the" or s=="you";
}

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for(int i=0; i<n; i++){
      string s;
      cin >> s;

      if(isEqual(s)) count++;
    }

    if(count > 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
